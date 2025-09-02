#!/usr/bin/env python3

import math
import numpy as np
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2, LaserScan
from sensor_msgs_py import point_cloud2 as pc2
from std_msgs.msg import Float32

class RobotHeightScan(Node):
    def __init__(self):
        super().__init__('robot_height_scan')

        # --- en __init__ 
        self.scan_frame = self.declare_parameter('scan_frame', 'base_link') \
                            .get_parameter_value().string_value

        # -nube de puntos y scan
        self.input_cloud   = self.declare_parameter('input_cloud', '/points').get_parameter_value().string_value
        self.scan_topic    = self.declare_parameter('scan_topic',  '/scan').get_parameter_value().string_value

        # Compensación  Rx(-90°)
        self.tilt_deg      = float(self.declare_parameter('tilt_deg', 90.0).value)

        #  ignora suelo y media-baja
        self.pitch_min_deg = float(self.declare_parameter('pitch_min_deg',  2.0).value)
        self.pitch_max_deg = float(self.declare_parameter('pitch_max_deg', 17.0).value)

        #  campo horizontal 
        self.yaw_min_deg   = float(self.declare_parameter('yaw_min_deg', -150.0).value)
        self.yaw_max_deg   = float(self.declare_parameter('yaw_max_deg',  150.0).value)
        self.bin_width_deg = float(self.declare_parameter('bin_width_deg', 2.0).value)

        # Rango de operación xacro
        self.range_min = float(self.declare_parameter('range_min', 0.10).value)
        self.range_max = float(self.declare_parameter('range_max', 30.0).value)

        #  cero latencia
        self.percentile = float(self.declare_parameter('percentile', 0.15).value)
        self.stride     = int(self.declare_parameter('stride', 1).value)

        #  frontal
        self.front_sector_deg = float(self.declare_parameter('front_sector_deg', 180.0).value)

        #  visualmente con cloud
        self.use_horizontal_range = bool(self.declare_parameter('use_horizontal_range', True).value)

        # 
        self.tilt_rad    = math.radians(self.tilt_deg)
        self.ct, self.st = math.cos(-self.tilt_rad), math.sin(-self.tilt_rad)

        self.pitch_min = math.radians(self.pitch_min_deg)
        self.pitch_max = math.radians(self.pitch_max_deg)
        self.yaw_min   = math.radians(self.yaw_min_deg)
        self.yaw_max   = math.radians(self.yaw_max_deg)
        self.bin_w     = math.radians(self.bin_width_deg)

        
        span = max(1e-6, self.yaw_max - self.yaw_min)
        self.num_bins = int(math.floor(span / self.bin_w)) + 1



        self.sub = self.create_subscription(PointCloud2, self.input_cloud, self.cb, 10)
        self.pub_scan = self.create_publisher(LaserScan, self.scan_topic, 10)
        self.pub_front = self.create_publisher(Float32, '/obstacle_distance_front', 10)

        self.get_logger().info(
            f"Robot-height scan from {self.input_cloud} -> {self.scan_topic} | "
            f"ZERO LATENCY MODE | "
            f"tilt={self.tilt_deg}°, pitch=[{self.pitch_min_deg},{self.pitch_max_deg}]°, "
            f"yaw=[{self.yaw_min_deg},{self.yaw_max_deg}]°, bin={self.bin_width_deg}°, "
            f"range=[{self.range_min},{self.range_max}] m"
        )

    def cb(self, msg: PointCloud2):
   
        bins = [[] for _ in range(self.num_bins)]

        
        try:
            # Lee puntos 
            points = list(pc2.read_points(msg, field_names=('x','y','z'), skip_nans=True))
            
            for i, (x, y, z) in enumerate(points):
                if self.stride > 1 and (i % self.stride) != 0:
                    continue

                # Rango 3D
                r3 = math.sqrt(x*x + y*y + z*z)
                if r3 < self.range_min or r3 > self.range_max:
                    continue

                # === Des-rotar 
                xp = x
                yp =  y * self.ct + z * self.st
                zp = -y * self.st + z * self.ct

                # Ángulos
                yaw   = math.atan2(yp, xp)                    # -pi..pi (frente = 0 rad)
                horiz = math.hypot(xp, yp)                    # radio en plano horizontal
                pitch = math.atan2(zp, horiz)                 # elevación

                # ignora suelo/media-baja
                if not (self.pitch_min <= pitch <= self.pitch_max):
                    continue

                # solo frente
                if not (self.yaw_min <= yaw <= self.yaw_max):
                    continue

                # scan 2D = radio horizontal
                r_h = horiz
                if r_h < self.range_min or r_h > self.range_max:
                    continue

                # Bin por yaw
                idx = int((yaw - self.yaw_min) / self.bin_w)
                if 0 <= idx < self.num_bins:
                    bins[idx].append(r_h)
                    
        except Exception as e:
            self.get_logger().warn(f"Error processing point cloud: {e}")
            return

        # Construye LaserScan
        scan = LaserScan()
        scan.header.stamp = msg.header.stamp  # Mismo timestamp que la nube de puntos
        scan.header.frame_id = self.scan_frame

        scan.angle_min = self.yaw_min
        scan.angle_max = self.yaw_max
        scan.angle_increment = self.bin_w
        scan.time_increment = 0.0
        scan.scan_time = 0.0  # procesamiento inmediato
        scan.range_min = self.range_min
        scan.range_max = self.range_max
        
  
        ranges = [float('inf')] * self.num_bins

        for i in range(self.num_bins):
            if len(bins[i]) > 0:
                # Usa el MÍNIMO 
                ranges[i] = float(min(bins[i]))
            else:
                ranges[i] = float('inf')  # Sin datos = infinito 

        scan.ranges = ranges

        # Publica 
        self.pub_scan.publish(scan)

        # Mínimo al frente 
        half = math.radians(self.front_sector_deg / 2.0)
        front_min = float('inf')
        for i in range(self.num_bins):
            ang = self.yaw_min + i * self.bin_w
            if -half <= ang <= half:
                if not math.isinf(scan.ranges[i]):
                    front_min = min(front_min, scan.ranges[i])

        self.pub_front.publish(Float32(data=front_min))

   
        self.get_logger().debug(f"Processed {len(points)} points -> {sum(1 for r in ranges if not math.isinf(r))} valid ranges")

def main():
    rclpy.init()
    node = RobotHeightScan()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

