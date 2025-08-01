"""
    Author: leyla
"""
from ament_index_python.packages import get_package_share_path

from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import Command, LaunchConfiguration


def generate_launch_description():
    """
    launch method
    """
    urdf_tutorial_path = get_package_share_path('robot_description')
    default_model_path = urdf_tutorial_path / 'urdf/JPAC2.urdf' # --------->  CHANGE HERE
    default_rviz_config_path = urdf_tutorial_path / 'rviz/urdf.rviz'

    gui_arg = DeclareLaunchArgument(
        name='gui',
        default_value='true', # FALSE = NOT PUBLICADOR MANUAL KEYBOARD
        choices=['true', 'false'],
        description='Flag to enable joint_state_publisher_gui')
    model_arg = DeclareLaunchArgument(
        name='model',
        default_value=str(default_model_path),
        description='Absolute path to robot urdf file')
    print("model arg: ", model_arg)
    rviz_arg = DeclareLaunchArgument(
        name='rvizconfig',
        default_value=str(default_rviz_config_path),
        description='Absolute path to rviz config file')

    #despues del xacro un espacio
    robot_description = ParameterValue(Command(
        ['xacro ', LaunchConfiguration('model')]),
                                       value_type=str)

    robot_state_publisher_node = Node(package='robot_state_publisher',
                                      executable='robot_state_publisher',
                                      parameters=[{
                                          'robot_description':
                                          robot_description
                                      }])

    joint_state_publisher_node = Node(package='joint_state_publisher',
                                      executable='joint_state_publisher',
                                      condition=UnlessCondition(
                                          LaunchConfiguration('gui')))

    joint_state_publisher_gui_node = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        condition=IfCondition(LaunchConfiguration('gui')))

    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', LaunchConfiguration('rvizconfig')],
    )

    return LaunchDescription([
        gui_arg, model_arg, rviz_arg, joint_state_publisher_node,
        joint_state_publisher_gui_node, robot_state_publisher_node, rviz_node
    ])
