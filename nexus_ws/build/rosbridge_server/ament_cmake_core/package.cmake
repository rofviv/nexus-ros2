set(_AMENT_PACKAGE_NAME "rosbridge_server")
set(rosbridge_server_VERSION "2.0.1")
set(rosbridge_server_MAINTAINER "Jihoon Lee <jihoonlee.in@gmail.com>, Foxglove <ros-tooling@foxglove.dev>")
set(rosbridge_server_BUILD_DEPENDS )
set(rosbridge_server_BUILDTOOL_DEPENDS "ament_cmake" "ament_cmake_ros")
set(rosbridge_server_BUILD_EXPORT_DEPENDS )
set(rosbridge_server_BUILDTOOL_EXPORT_DEPENDS )
set(rosbridge_server_EXEC_DEPENDS "python3-tornado" "python3-twisted" "rclpy" "rosbridge_library" "rosbridge_msgs" "rosapi")
set(rosbridge_server_TEST_DEPENDS "example_interfaces" "python3-autobahn" "launch" "launch_ros" "launch_testing" "launch_testing_ros" "launch_testing_ament_cmake" "std_srvs")
set(rosbridge_server_GROUP_DEPENDS )
set(rosbridge_server_MEMBER_OF_GROUPS )
set(rosbridge_server_DEPRECATED "")
set(rosbridge_server_EXPORT_TAGS)
list(APPEND rosbridge_server_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
