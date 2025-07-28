import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from ucb_interface.msg import Motor


# Me falta:  Hacer que la velocidad sea en base al valor ingresado desde la WEB 
#            ya que la vel de 0.1 es ctte miestras en la pajina sea > 0


class MotorVisualizer(Node):
    def __init__(self):
        super().__init__('motor_visualizer')

        
        self.create_subscription(Motor, '/motor_command', self.motor_callback, 10)

        # Pub en los joint
        self.joint_pub = self.create_publisher(JointState, '/joint_states', 10)

        # pos actual
        self.pos_izq = 0.0
        self.pos_der = 0.0

        # vel 
        self.vel_izq = 0.0
        self.vel_der = 0.0

       
        self.create_timer(0.1, self.actualizar_joints) # 0,1 ms

    def motor_callback(self, msg):

        # vel 0.1 ( si desde la WEB - PWM > 0) 
        self.vel_izq += 0.1 if msg.pwm_left > 0 else 0.0
        self.vel_der += 0.1 if msg.pwm_right > 0 else 0.0

    def actualizar_joints(self):

        self.pos_izq -= self.vel_izq   # giro hacia adelante
        self.pos_der += self.vel_der   # giro hacia adelante

        # self.get_logger().info(f"pos_derecha: {self.pos_der}")

        # msg a joints
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
