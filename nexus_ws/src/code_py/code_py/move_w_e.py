import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from ucb_interface.msg import Motor


class MotorVisualizer(Node):
    def __init__(self):
        super().__init__('move_w_e')

        self.create_subscription(Motor, '/motor_command', self.motor_callback, 10)

        # Pub joints de rviz
        self.joint_pub = self.create_publisher(JointState, '/joint_states', 10)

        # pos actual
        self.pos_izq = 0.0
        self.pos_der = 0.0

        # vel inicial
        self.vel_izq = 0.0
        self.vel_der = 0.0

        self.create_timer(0.1, self.actualizar_joints)

    def motor_callback(self, msg):

        #  PWM (0-100) , vel (0.0 - 1.0)
        escala = 0.01  

        self.vel_izq = msg.pwm_left * escala
        self.vel_der = msg.pwm_right * escala

        if msg.pwm_left == 0.0:
            self.vel_izq = 0.0
        if msg.pwm_right == 0.0:
            self.vel_der = 0.0

        self.get_logger().info(
            f"PWM -> Vel_izq: {self.vel_izq:.2f}, Vel_der: {self.vel_der:.2f}"
        )

    def actualizar_joints(self):
        # posicion de vel
        self.pos_izq -= self.vel_izq
        self.pos_der += self.vel_der

        # msg de JointState para publicar
        joint_msg = JointState()
        joint_msg.name = ['RuedaIzqierda_join', 'RuedaDerecha_join']
        joint_msg.position = [self.pos_izq, self.pos_der]
        joint_msg.header.stamp = self.get_clock().now().to_msg()

        self.joint_pub.publish(joint_msg)


def main():
    rclpy.init()
    node = MotorVisualizer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
