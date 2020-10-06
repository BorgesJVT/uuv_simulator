cmake_minimum_required(VERSION 3.5)
project(uuv_gazebo_ros_plugins_msgs)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)

set(msg_files
  "msg/FloatStamped.msg"
  "msg/UnderwaterObjectModel.msg"
  "msg/ThrusterConversionFcn.msg"
)

set(srv_files
  "srv/SetThrusterEfficiency.srv"
  "srv/SetThrusterState.srv"
  "srv/GetThrusterEfficiency.srv"
  "srv/GetThrusterState.srv"
  "srv/SetUseGlobalCurrentVel.srv"
  "srv/GetModelProperties.srv"
  "srv/SetFloat.srv"
  "srv/GetFloat.srv"
  "srv/GetListParam.srv"
  "srv/GetThrusterConversionFcn.srv"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  ${srv_files}
  DEPENDENCIES builtin_interfaces geometry_msgs std_msgs
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()