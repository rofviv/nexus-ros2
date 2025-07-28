
# ----------- SE REQUIERE PUBLICAR DESDE LA TEMRINAL EL ESTADO DE PUERTA, REVERSA Y FRENO -------------------
# ros2 topic pub /actuador_command ucb_interface/msg/Manual "{puerta: false, reversa: true, freno: false}"


# import rclpy
# from rclpy.node import Node
# from ucb_interface.msg import Manual

# class ActuadorControl(Node):
#     def __init__(self):
#         super().__init__('actuador_control')
#         self.create_subscription(Manual, '/actuador_command', self.listener_callback, 10)

#     def listener_callback(self, msg):
#         estado = f"Puerta: {'ON' if msg.puerta else 'OFF'} | " \
#                  f"Reversa: {'ON' if msg.reversa else 'OFF'} | " \
#                  f"Freno: {'ON' if msg.freno else 'OFF'}"
        
#         self.get_logger().info(estado)

# def main():
#     rclpy.init()
#     node = ActuadorControl()
#     rclpy.spin(node)
#     node.destroy_node()
#     rclpy.shutdown()

# if __name__ == '__main__':
#     main()


# ----------- SE REQUIERE CAMBIAR EL ESTADO DE PUERTA, REVERSA Y FRENO DESDE UN .TXT SIN NECESIDAD DE PUBLICAR CONSTANTEMENTE -------------------
import rclpy
from rclpy.node import Node
from ucb_interface.msg import Manual    # publica aqui

class ActuadorControl(Node):
    def __init__(self):
        super().__init__('actuador_control_manual')

       
        self.publisher_ = self.create_publisher(Manual, '/actuador_manual', 10)

        # leer y publica cada 0.5 s
        self.create_timer(0.5, self.leer_y_publicar_estado)


    def leer_y_publicar_estado(self):
        try:
            with open('/home/leyla/Desktop/nexus_ws/src/manual/estado.txt', 'r') as f:
                data = f.read().splitlines()
                estados = {k: v == '1' for k, v in (line.split('=') for line in data)}

                # Crear y llenar el mensaje
                msg = Manual()
                msg.puerta = estados['puerta']
                msg.reversa = estados['reversa']
                msg.freno = estados['freno']

                # pub el msg
                self.publisher_.publish(msg)

                estado = f" Publicado -> Puerta: {'ON' if msg.puerta else 'OFF'} | " \
                         f"Reversa: {'ON' if msg.reversa else 'OFF'} | " \
                         f"Freno: {'ON' if msg.freno else 'OFF'}"
                self.get_logger().info(estado)

        except Exception as e:
            self.get_logger().error(f" Error leyendo estado.txt: {e}")

def main():
    rclpy.init()
    node = ActuadorControl()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
