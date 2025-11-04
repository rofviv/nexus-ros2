#!/usr/bin/env python3


# ESTE HACE UNA SEGMENTACION DEL SUELO, Y PAREDES EN BASE A EL LIDAR 4D


import math
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2, PointField
from sensor_msgs_py import point_cloud2
from std_msgs.msg import Header

def make_cloud(header, points):
    fields = [
        PointField(name='x', offset=0,  datatype=PointField.FLOAT32, count=1),
        PointField(name='y', offset=4,  datatype=PointField.FLOAT32, count=1),
        PointField(name='z', offset=8,  datatype=PointField.FLOAT32, count=1),
    ]
    return point_cloud2.create_cloud(header, fields, points)

class Lidar3DSlices(Node):
    def __init__(self):
        super().__init__('lidar3d_slices')

        # === Parámetros recomendados para tu .xacro (90° roll) ===
        self.declare_parameter('input_cloud', '/points')
        self.declare_parameter('tilt_deg',    90.0)   # <-- COMPENSA el roll físico (rpy 1.5708)

        self.declare_parameter('floor_deg',   -17.0)  # elev <= floor -> suelo (ajusta fino)

        self.declare_parameter('ceiling_deg',  18.0)  # elev >= ceiling -> techo
        self.declare_parameter('min_range',    0.40)  # casa con tu <range> (0.40–2.5)
        self.declare_parameter('max_range',    2.50)
        self.declare_parameter('stride',       1)     # submuestreo (1 = sin)

        self.in_topic    = self.get_parameter('input_cloud').value
        self.tilt_rad    = math.radians(float(self.get_parameter('tilt_deg').value))
        self.floor_rad   = math.radians(float(self.get_parameter('floor_deg').value))
        self.ceiling_rad = math.radians(float(self.get_parameter('ceiling_deg').value))
        self.min_r       = float(self.get_parameter('min_range').value)
        self.max_r       = float(self.get_parameter('max_range').value)
        self.stride      = int(self.get_parameter('stride').value)

        # Precalcula seno/coseno para la rotación Rx(-tilt)
        self.ct = math.cos(-self.tilt_rad)
        self.st = math.sin(-self.tilt_rad)

        self.sub = self.create_subscription(PointCloud2, self.in_topic, self.cb, 10)
        self.pub_floor   = self.create_publisher(PointCloud2, '/slices/floor',   10)


        self.pub_walls   = self.create_publisher(PointCloud2, '/slices/walls',   10)


        self.pub_ceiling = self.create_publisher(PointCloud2, '/slices/ceiling', 10)

        self.get_logger().info(
            f'Listening to {self.in_topic} | tilt={math.degrees(self.tilt_rad):.1f}° '
            f'floor<={math.degrees(self.floor_rad):.1f}° ceiling>={math.degrees(self.ceiling_rad):.1f}° '
            f'range=[{self.min_r},{self.max_r}] stride={self.stride}'
        )

    def cb(self, msg: PointCloud2):
        floor_pts, wall_pts, ceil_pts = [], [], []

        for i, p in enumerate(point_cloud2.read_points(msg, field_names=('x','y','z'), skip_nans=True)):
            if self.stride > 1 and (i % self.stride) != 0:
                continue
            x, y, z = float(p[0]), float(p[1]), float(p[2])

            # Rango
            r = math.sqrt(x*x + y*y + z*z)
            if r < self.min_r or r > self.max_r:
                continue

            # === Des-rotar por el roll físico del sensor: Rx(-tilt) ===
            # x' = x
            # y' =  y*cos(-tilt) + z*sin(-tilt)
            # z' = -y*sin(-tilt) + z*cos(-tilt)
            yp =  y * self.ct + z * self.st
            zp = -y * self.st + z * self.ct
            xp =  x

            # Elevación respecto al “horizonte corregido”
            horiz = math.hypot(xp, yp)
            elev  = math.atan2(zp, horiz)

            if elev <= self.floor_rad:
                floor_pts.append((x, y, z))   # publica en el frame original del cloud
            elif elev >= self.ceiling_rad:
                ceil_pts.append((x, y, z))
            else:
                wall_pts.append((x, y, z))

        header = Header()
        header.stamp = msg.header.stamp
        header.frame_id = msg.header.frame_id  # p.ej. lidar3d_optical_link

        if floor_pts:
            self.pub_floor.publish(make_cloud(header, floor_pts))
        if wall_pts:
            self.pub_walls.publish(make_cloud(header, wall_pts))
        if ceil_pts:
            self.pub_ceiling.publish(make_cloud(header, ceil_pts))

def main():
    rclpy.init()
    node = Lidar3DSlices()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()











# ------------- CHATGPT -----------------


# #!/usr/bin/env python3
# import math
# import rclpy
# from rclpy.node import Node
# from std_msgs.msg import Float32
# from sensor_msgs.msg import PointCloud2
# from sensor_msgs_py import point_cloud2 as pc2

# class LidarMinDistance(Node):
#     def __init__(self):
#         super().__init__('lidar_min_distance')

#         # --- Parámetros (ajusta a tu setup) ---
#         self.points_topic = self.declare_parameter('points_topic', '/points').get_parameter_value().string_value
#         self.sector_yaw_width_deg = float(self.declare_parameter('sector_yaw_width_deg', 60.0).value)   # ±30°


#         self.sector_pitch_min_deg = float(self.declare_parameter('sector_pitch_min_deg', -2.0).value)
#         self.sector_pitch_max_deg = float(self.declare_parameter('sector_pitch_max_deg',  2.0).value)

        
#         self.range_min = float(self.declare_parameter('range_min', 0.40).value)
#         self.range_max = float(self.declare_parameter('range_max', 2.50).value)



#         # I/O
#         self.sub_points = self.create_subscription(PointCloud2, self.points_topic, self.on_points, 10)
#         self.pub_dist   = self.create_publisher(Float32, '/obstacle_distance', 10)

#         self.get_logger().info(
#             f'Escuchando {self.points_topic} | sector yaw±{self.sector_yaw_width_deg/2:.1f}°, '
#             f'pitch[{self.sector_pitch_min_deg},{self.sector_pitch_max_deg}]° | '
#             f'range[{self.range_min},{self.range_max}] m'
#         )

#     def on_points(self, cloud: PointCloud2):
#         yaw_half  = math.radians(self.sector_yaw_width_deg / 2.0)
#         pitch_min = math.radians(self.sector_pitch_min_deg)
#         pitch_max = math.radians(self.sector_pitch_max_deg)

#         min_d = None

#         for x, y, z in pc2.read_points(cloud, field_names=('x','y','z'), skip_nans=True):
#             d = math.sqrt(x*x + y*y + z*z)
#             if d < self.range_min or d > self.range_max:
#                 continue

#             yaw   = math.atan2(y, x)
#             pitch = math.atan2(z, math.sqrt(x*x + y*y))

#             if abs(yaw) <= yaw_half and (pitch_min <= pitch <= pitch_max):
#                 if (min_d is None) or (d < min_d):
#                     min_d = d

#         msg = Float32()
#         msg.data = float('inf') if min_d is None else float(min_d)
#         self.pub_dist.publish(msg)

# def main():
#     rclpy.init()
#     node = LidarMinDistance()
#     try:
#         rclpy.spin(node)
#     except KeyboardInterrupt:
#         pass
#     node.destroy_node()
#     rclpy.shutdown()

# if __name__ == '__main__':
#     main()




















# #!/usr/bin/env python3


# # ESTE HACE UNA ---------------SEGMENTACION DEL SUELO--------------, Y PAREDES EN BASE A EL LIDAR 4D


# import math
# import rclpy
# from rclpy.node import Node
# from sensor_msgs.msg import PointCloud2, PointField
# from sensor_msgs_py import point_cloud2
# from std_msgs.msg import Header

# def make_cloud(header, points):
#     fields = [
#         PointField(name='x', offset=0,  datatype=PointField.FLOAT32, count=1),
#         PointField(name='y', offset=4,  datatype=PointField.FLOAT32, count=1),
#         PointField(name='z', offset=8,  datatype=PointField.FLOAT32, count=1),
#     ]
#     return point_cloud2.create_cloud(header, fields, points)

# class Lidar3DSlices(Node):
#     def __init__(self):
#         super().__init__('lidar3d_slices')

#         # === Parámetros recomendados para tu .xacro (90° roll) ===
#         self.declare_parameter('input_cloud', '/points')
#         self.declare_parameter('tilt_deg',    90.0)   # <-- COMPENSA el roll físico (rpy 1.5708)
#         self.declare_parameter('floor_deg',   -12.0)  # elev <= floor -> suelo (ajusta fino)
#         self.declare_parameter('ceiling_deg',  18.0)  # elev >= ceiling -> techo
#         self.declare_parameter('min_range',    0.40)  # casa con tu <range> (0.40–2.5)
#         self.declare_parameter('max_range',    2.50)
#         self.declare_parameter('stride',       1)     # submuestreo (1 = sin)

#         self.in_topic    = self.get_parameter('input_cloud').value
#         self.tilt_rad    = math.radians(float(self.get_parameter('tilt_deg').value))
#         self.floor_rad   = math.radians(float(self.get_parameter('floor_deg').value))
#         self.ceiling_rad = math.radians(float(self.get_parameter('ceiling_deg').value))
#         self.min_r       = float(self.get_parameter('min_range').value)
#         self.max_r       = float(self.get_parameter('max_range').value)
#         self.stride      = int(self.get_parameter('stride').value)

#         # Precalcula seno/coseno para la rotación Rx(-tilt)
#         self.ct = math.cos(-self.tilt_rad)
#         self.st = math.sin(-self.tilt_rad)

#         self.sub = self.create_subscription(PointCloud2, self.in_topic, self.cb, 10)
#         self.pub_floor   = self.create_publisher(PointCloud2, '/slices/floor',   10)
#         self.pub_walls   = self.create_publisher(PointCloud2, '/slices/walls',   10)
#         self.pub_ceiling = self.create_publisher(PointCloud2, '/slices/ceiling', 10)

#         self.get_logger().info(
#             f'Listening to {self.in_topic} | tilt={math.degrees(self.tilt_rad):.1f}° '
#             f'floor<={math.degrees(self.floor_rad):.1f}° ceiling>={math.degrees(self.ceiling_rad):.1f}° '
#             f'range=[{self.min_r},{self.max_r}] stride={self.stride}'
#         )

#     def cb(self, msg: PointCloud2):
#         floor_pts, wall_pts, ceil_pts = [], [], []

#         for i, p in enumerate(point_cloud2.read_points(msg, field_names=('x','y','z'), skip_nans=True)):
#             if self.stride > 1 and (i % self.stride) != 0:
#                 continue
#             x, y, z = float(p[0]), float(p[1]), float(p[2])

#             # Rango
#             r = math.sqrt(x*x + y*y + z*z)
#             if r < self.min_r or r > self.max_r:
#                 continue

#             # === Des-rotar por el roll físico del sensor: Rx(-tilt) ===
#             # x' = x
#             # y' =  y*cos(-tilt) + z*sin(-tilt)
#             # z' = -y*sin(-tilt) + z*cos(-tilt)
#             yp =  y * self.ct + z * self.st
#             zp = -y * self.st + z * self.ct
#             xp =  x

#             # Elevación respecto al “horizonte corregido”
#             horiz = math.hypot(xp, yp)
#             elev  = math.atan2(zp, horiz)

#             if elev <= self.floor_rad:
#                 floor_pts.append((x, y, z))   # publica en el frame original del cloud
#             elif elev >= self.ceiling_rad:
#                 ceil_pts.append((x, y, z))
#             else:
#                 wall_pts.append((x, y, z))

#         header = Header()
#         header.stamp = msg.header.stamp
#         header.frame_id = msg.header.frame_id  # p.ej. lidar3d_optical_link

#         if floor_pts:
#             self.pub_floor.publish(make_cloud(header, floor_pts))
#         if wall_pts:
#             self.pub_walls.publish(make_cloud(header, wall_pts))
#         if ceil_pts:
#             self.pub_ceiling.publish(make_cloud(header, ceil_pts))

# def main():
#     rclpy.init()
#     node = Lidar3DSlices()
#     rclpy.spin(node)
#     node.destroy_node()
#     rclpy.shutdown()

# if __name__ == '__main__':
#     main()





