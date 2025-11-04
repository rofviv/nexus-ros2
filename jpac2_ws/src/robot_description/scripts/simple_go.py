#!/usr/bin/env python3
import math
import yaml
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist, PoseWithCovarianceStamped
from tf2_ros import Buffer, TransformListener
from rclpy.duration import Duration

def ang_norm(a):
    """Normaliza ángulo a [-pi, pi]."""
    while a > math.pi:
        a -= 2*math.pi
    while a < -math.pi:
        a += 2*math.pi
    return a

def yaw_to_quat(z):
    """Convierte yaw (rad) a cuaternión (x,y,z,w)."""
    return (0.0, 0.0, math.sin(z/2.0), math.cos(z/2.0))

class SimpleGoTo(Node):
    """
    Conduce del punto actual a (goal_x, goal_y) en 'map' (sin evitar obstáculos).
    Además, PUBLICA la pose inicial en /initialpose leyendo el 'origin' del YAML.
    """

    def __init__(self):
        super().__init__('simple_go_to')

        # Parámetros de navegación
        self.declare_parameter('goal_x', 0.0)
        self.declare_parameter('goal_y', 0.0)
        self.declare_parameter('base_frame', 'base_link') 
        self.declare_parameter('v_max', 0.35)
        self.declare_parameter('w_max', 1.2)
        self.declare_parameter('k_lin', 0.6)
        self.declare_parameter('k_ang', 2.0)
        self.declare_parameter('goal_tol', 0.10)    # [m]
        self.declare_parameter('align_thresh', 0.2) # [rad]

        # Parámetros de auto-inicialización desde YAML
        self.declare_parameter('auto_init_pose', True)
        self.declare_parameter('map_yaml', '')         # ruta al YAML del mapa
        self.declare_parameter('init_publish_times', 30)   # cuántas veces publicar /initialpose
        self.declare_parameter('init_publish_rate_hz', 10.0)
        self.declare_parameter('init_cov_xy', 0.25)        # varianza X,Y
        self.declare_parameter('init_cov_yaw_deg', 10.0)   # varianza yaw (grados)^2

        # Lee parámetros
        self.goal_x = float(self.get_parameter('goal_x').value)
        self.goal_y = float(self.get_parameter('goal_y').value)
        self.base_frame = self.get_parameter('base_frame').value
        self.v_max = float(self.get_parameter('v_max').value)
        self.w_max = float(self.get_parameter('w_max').value)
        self.k_lin = float(self.get_parameter('k_lin').value)
        self.k_ang = float(self.get_parameter('k_ang').value)
        self.goal_tol = float(self.get_parameter('goal_tol').value)
        self.align_thresh = float(self.get_parameter('align_thresh').value)

        self.auto_init_pose = bool(self.get_parameter('auto_init_pose').value)
        self.map_yaml = self.get_parameter('map_yaml').value
        self.init_publish_times = int(self.get_parameter('init_publish_times').value)
        self.init_publish_rate_hz = float(self.get_parameter('init_publish_rate_hz').value)
        self.init_cov_xy = float(self.get_parameter('init_cov_xy').value)
        self.init_cov_yaw = math.radians(float(self.get_parameter('init_cov_yaw_deg').value)) ** 2

        # Flag de llegada para no repetir mensajes ni comandos
        self.goal_reached = False

        # Permite cambiar goal_x/y en caliente con ros2 param set
        self.add_on_set_parameters_callback(self.on_set_params)

        # Publicadores / subs
        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 1)
        self.init_pub = self.create_publisher(PoseWithCovarianceStamped, '/initialpose', 10)

        # TF para pose map->base_frame
        self.tfbuf = Buffer(cache_time=Duration(seconds=10))
        self.tfl = TransformListener(self.tfbuf, self)

        # (Opcional) publicar inicialización automática desde YAML
        self.init_left = 0
        self.init_x = 0.0
        self.init_y = 0.0
        self.init_yaw = 0.0
        if self.auto_init_pose and self.map_yaml:
            self._load_origin_from_yaml()
            self.init_left = self.init_publish_times
            period = 1.0 / max(1e-3, self.init_publish_rate_hz)
            self.init_timer = self.create_timer(period, self._publish_initialpose)
        else:
            if self.auto_init_pose:
                self.get_logger().warn("auto_init_pose=True pero 'map_yaml' vacío; no se publicará /initialpose")

        # Control a 20 Hz
        self.ctrl_timer = self.create_timer(0.05, self.step)

        self.get_logger().info(f"SimpleGoTo hacia (x={self.goal_x:.2f}, y={self.goal_y:.2f}) en 'map'.")

    # ---------- Inicialización desde YAML ----------
    def _load_origin_from_yaml(self):
        try:
            with open(self.map_yaml, 'r') as f:
                data = yaml.safe_load(f)
            origin = data.get('origin', [0.0, 0.0, 0.0])
            self.init_x = float(origin[0])
            self.init_y = float(origin[1])
            self.init_yaw = float(origin[2])
            self.get_logger().info(f"Origin del mapa: x={self.init_x:.3f}, y={self.init_y:.3f}, yaw={self.init_yaw:.3f} rad")
        except Exception as e:
            self.get_logger().error(f"No pude leer '{self.map_yaml}': {e}")
            self.auto_init_pose = False

    def _publish_initialpose(self):
        """Publica /initialpose varias veces para que AMCL tome la pose inicial."""
        if self.init_left <= 0:
            return
        msg = PoseWithCovarianceStamped()
        msg.header.frame_id = 'map'
        msg.header.stamp = self.get_clock().now().to_msg()

        msg.pose.pose.position.x = self.init_x
        msg.pose.pose.position.y = self.init_y
        qx, qy, qz, qw = yaw_to_quat(self.init_yaw)
        msg.pose.pose.orientation.x = qx
        msg.pose.pose.orientation.y = qy
        msg.pose.pose.orientation.z = qz
        msg.pose.pose.orientation.w = qw

        cov = [0.0] * 36  # 6x6
        cov[0] = self.init_cov_xy   # xx
        cov[7] = self.init_cov_xy   # yy
        cov[35] = self.init_cov_yaw # yaw yaw
        msg.pose.covariance = cov

        self.init_pub.publish(msg)
        self.init_left -= 1

        if self.init_left == 0:
            self.get_logger().info("Pose inicial publicada. AMCL debería dejar de pedir inicialización.")

    # ---------- Navegación ----------
    def on_set_params(self, params):
        for p in params:
            if p.name == 'goal_x':
                self.goal_x = float(p.value)
            elif p.name == 'goal_y':
                self.goal_y = float(p.value)
        self.get_logger().info(f"Nueva meta: (x={self.goal_x:.2f}, y={self.goal_y:.2f})")
        from rclpy.parameter import SetParametersResult
        return SetParametersResult(successful=True)

    def step(self):
        # Si ya llegamos y cancelamos el control, no hacer nada más
        if self.goal_reached:
            return

        # Obtén pose actual en 'map'
        try:
            tf = self.tfbuf.lookup_transform('map', self.base_frame, rclpy.time.Time())
        except Exception as e:
            # Hasta que AMCL publique map->odom y exista odom->base_link no habrá TF
            self.get_logger().warn(f"Esperando TF map->{self.base_frame}: {e}")
            return

        x = tf.transform.translation.x
        y = tf.transform.translation.y
        q = tf.transform.rotation
        yaw = math.atan2(2*(q.w*q.z + q.x*q.y), 1 - 2*(q.y*q.y + q.z*q.z))

        # Error a la meta
        dx = self.goal_x - x
        dy = self.goal_y - y
        dist = math.hypot(dx, dy)
        bearing = math.atan2(dy, dx)
        ang_err = ang_norm(bearing - yaw)

        cmd = Twist()

        if dist < self.goal_tol:
            # Llegó: parar, avisar una sola vez y cancelar el control
            self.goal_reached = True
            self.cmd_pub.publish(Twist())  # vel 0
            self.get_logger().info("Destino llegado")
            print("Destino llegado")
            # Detenemos el timer de control para no seguir publicando
            try:
                self.ctrl_timer.cancel()
            except Exception:
                pass
            return

        # Política: si está desalineado, primero gira; si no, avanza y corrige
        if abs(ang_err) > self.align_thresh:
            cmd.angular.z = max(-self.w_max, min(self.w_max, self.k_ang * ang_err))
            cmd.linear.x = 0.0
        else:
            cmd.linear.x = max(0.0, min(self.v_max, self.k_lin * dist))
            cmd.angular.z = max(-self.w_max, min(self.w_max, self.k_ang * ang_err))

        self.cmd_pub.publish(cmd)

def main():
    rclpy.init()
    rclpy.spin(SimpleGoTo())
    rclpy.shutdown()

if __name__ == '__main__':
    main()
