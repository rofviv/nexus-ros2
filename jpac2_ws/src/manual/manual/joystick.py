import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy, JointState

class JoystickToJoints(Node):
    def __init__(self):
        super().__init__('joystick_to_joints')

        # pub joints en RViz
        self.joint_pub = self.create_publisher(JointState, '/joint_states', 10)

        self.create_subscription(Joy, '/joy', self.joy_callback, 10)
        self.get_logger().info(" \t Nodo JoystickToJoints iniciado")

        # posición acumulada 
        self.pos_izq = 0.0
        self.pos_der = 0.0

        # vel actual
        self.vel_izq = 0.0
        self.vel_der = 0.0

        self.PWM_MAX = 80.0

        self.create_timer(0.1, self.actualizar_joints)

    def joy_callback(self, msg):

        # eje joystick 
        eje = msg.axes[1]

        if eje >= 1:
            self.get_logger().info("Adelante")
        elif eje <= -1:
            self.get_logger().info("Atrás")
        else:
            self.get_logger().info(f"Neutro - Deternido ({eje:.2f})")

        # (escala PWM_MAX → 0.8 rad/step)
        vel = (eje * self.PWM_MAX) / 100.0
        self.vel_izq = vel
        self.vel_der = vel

    def actualizar_joints(self):
        # acumular posición de las ruedas 
        self.pos_izq -= self.vel_izq * 0.1 # giro correcto
        self.pos_der += self.vel_der * 0.1

        # mensaje en joints de rviz
        joint_msg = JointState()
        joint_msg.name = ['RuedaIzqierda_join', 'RuedaDerecha_join']
        joint_msg.position = [self.pos_izq, self.pos_der]
        joint_msg.header.stamp = self.get_clock().now().to_msg()

        self.joint_pub.publish(joint_msg)

def main():
    rclpy.init()
    node = JoystickToJoints()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
