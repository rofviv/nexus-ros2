#!/usr/bin/env python3

import math
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2, LaserScan
from sensor_msgs_py import point_cloud2
import numpy as np

class WallsToLaserScan(Node):
    def __init__(self):
        super().__init__('walls_to_laserscan_node')

        self.declare_parameter('scan_min_angle_deg', -180.0)
        self.declare_parameter('scan_max_angle_deg',  180.0)
        self.declare_parameter('scan_resolution_deg',   1.0)
        self.declare_parameter('scan_range_min',        0.4)
        self.declare_parameter('scan_range_max',        6.0)  # Aumenta el rango máximo del scan

        self.min_angle = math.radians(self.get_parameter('scan_min_angle_deg').value)
        self.max_angle = math.radians(self.get_parameter('scan_max_angle_deg').value)
        self.angle_increment = math.radians(self.get_parameter('scan_resolution_deg').value)
        self.range_min = self.get_parameter('scan_range_min').value
        self.range_max = self.get_parameter('scan_range_max').value

        # Suscripción a la nube de puntos de paredes
        self.subscription = self.create_subscription(
            PointCloud2,
            '/slices/walls',  
            self.cloud_callback,
            10)

        # Publicación del LaserScan
        self.scan_publisher = self.create_publisher(LaserScan, '/scan', 10)
        
        self.get_logger().info('Walls to LaserScan node started, converting /slices/walls to /scan')

    def cloud_callback(self, msg: PointCloud2):
        if not msg.data:
            self.publish_empty_scan(msg.header.frame_id)
            return

        # Usar read_points_numpy para un manejo más eficiente
        points = point_cloud2.read_points_numpy(msg, field_names=('x', 'y', 'z'), skip_nans=True)
        if points.size == 0:
            self.publish_empty_scan(msg.header.frame_id)
            return

        scan_size = int(round((self.max_angle - self.min_angle) / self.angle_increment))
        scan_msg = LaserScan()
        scan_msg.header = msg.header
        scan_msg.header.frame_id = msg.header.frame_id
        
        scan_msg.angle_min = self.min_angle
        scan_msg.angle_max = self.max_angle
        scan_msg.angle_increment = self.angle_increment
        scan_msg.time_increment = 0.0
        scan_msg.scan_time = 1.0 / 10.0
        scan_msg.range_min = self.range_min
        scan_msg.range_max = self.range_max
        scan_msg.ranges = [float('inf')] * scan_size
        
        # Procesar los puntos y rellenar el LaserScan
        for p in points:
            x, y, z = p[0], p[1], p[2]
            
            # === CÁLCULO DE DISTANCIA HORIZONTAL ===
            # La distancia al obstáculo se proyecta en el plano X-Y.
            distance = math.sqrt(x**2 + y**2)
            
            angle = math.atan2(y, x)

            # Convertir ángulo a índice en el array
            if self.min_angle <= angle <= self.max_angle:
                index = int((angle - self.min_angle) / self.angle_increment)
                if index >= 0 and index < scan_size:
                    if self.range_min <= distance <= self.range_max:
                        # Si hay múltiples puntos en el mismo ángulo, toma el más cercano.
                        if distance < scan_msg.ranges[index]:
                            scan_msg.ranges[index] = distance
        
        self.scan_publisher.publish(scan_msg)
    
    def publish_empty_scan(self, frame_id):
        scan_size = int(round((self.max_angle - self.min_angle) / self.angle_increment))
        empty_scan = LaserScan()
        empty_scan.header.stamp = self.get_clock().now().to_msg()
        empty_scan.header.frame_id = frame_id
        empty_scan.angle_min = self.min_angle
        empty_scan.angle_max = self.max_angle
        empty_scan.angle_increment = self.angle_increment
        empty_scan.range_min = self.range_min
        empty_scan.range_max = self.range_max
        empty_scan.ranges = [float('inf')] * scan_size
        self.scan_publisher.publish(empty_scan)

def main(args=None):
    rclpy.init(args=args)
    node = WallsToLaserScan()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()