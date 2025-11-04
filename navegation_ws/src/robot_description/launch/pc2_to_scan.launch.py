# //////////////////////////////////////////////////
# /////////////// ESTE SI ESTA BIEN ////////////////
# //////////////////////////////////////////////////

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='pointcloud_to_laserscan',
            executable='pointcloud_to_laserscan_node',   # humble

            name='pc2_to_scan',
            remappings=[('cloud_in', '/points2'),
                        ('scan',     '/scan')],
            parameters=[{
             
                'target_frame': 'base_link',
                'transform_tolerance': 0.01,

                # horizontal  = altura del sensor 0.83 
                'min_height': 0.80,
                'max_height': 0.86,

                # 3) Campo de visión y resolución deseados del scan
                'angle_min': -3.14159,
                'angle_max':  3.14159,
                'angle_increment': 0.00436,  # ~0.25°
                'scan_time': 0.1,               # uprate 10Hz
                'range_min': 0.10, #0.10, 
                'range_max': 20.0,
                'use_inf': True,
                'inf_epsilon': 1.0
            }]
        )
    ])


# N=1080 rayos → ≈ 0.00582 rad ≈ 0.333°

# N=1440 rayos → ≈ 0.00436 rad ≈ 0.25°











# from launch import LaunchDescription
# from launch_ros.actions import Node

# def generate_launch_description():
#     return LaunchDescription([

#         Node(
#             package='robot_description', # Asegúrate que este es el nombre de tu paquete
#             executable='dist.py',        # O 'robot_height_scan.py' si cambiaste el nombre
#             name='robot_height_scan',
#             output='screen',
#             parameters=[{
#                 'input_cloud': '/points2',
#                 'scan_topic':  '/scan',

#                 'scan_frame':  'base_scan', #
                
#                 #  CRÍTICO: Activa la compensación de 90 grados en Y en el script
#                 'tilt_deg': 90.0,             
                
#                 #  FILTRO VERTICAL: Franja horizontal de 5° a 15° (para evitar el suelo)
#                 'pitch_min_deg': -45.0, # -2.0 piso
#                 'pitch_max_deg':  45.0,   # 5.0 piso
                
#                 #  FILTRO HORIZONTAL: Semicírculo frontal de -90° a 90°
#                 'yaw_min_deg': -150.0, # -180.0
#                 'yaw_max_deg':  150.0, #  180.0
                
#                 'bin_width_deg': 1.0,
#                 'range_min': 0.10,
#                 'range_max': 20.0,
#                 'percentile': 0.15,
#                 'stride': 1,
#                 'front_sector_deg': 300.0,
#                 'use_horizontal_range': True
#             }]
            
#         )
#     ])