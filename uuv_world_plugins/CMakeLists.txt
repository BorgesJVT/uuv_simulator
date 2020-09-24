cmake_minimum_required(VERSION 3.5)
project(uuv_world_plugins)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

if(WIN32)
  add_compile_definitions(
    # For math constants
    _USE_MATH_DEFINES
    # Minimize Windows namespace collision
    NOMINMAX
    WIN32_LEAN_AND_MEAN
  )
endif()

set(FastRTPS_INCLUDE_DIR /opt/ros/foxy/include) 
set(FastRTPS_LIBRARY_RELEASE /opt/ros/foxy/lib/libfastrtps.so)

find_package(ament_cmake REQUIRED)
#find_package(builtin_interfaces REQUIRED)
#find_package(rosidl_default_generators REQUIRED)
#find_package(gazebo REQUIRED)
find_package(rclcpp REQUIRED)
find_package(gazebo_dev REQUIRED)
find_package(gazebo_ros REQUIRED)
find_package(uuv_world_ros_plugins_msgs REQUIRED)

include_directories(
  include
)

###########
## Build ##
###########

add_library(uuv_underwater_current_plugin SHARED
  src/uuv_world_plugins_underwater_current.cpp
  src/uuv_world_plugins_gauss_markov_process.cpp
)
ament_target_dependencies(uuv_underwater_current_plugin
  "rclcpp"
  "gazebo_dev"
  "gazebo_ros"
)
ament_export_libraries(uuv_underwater_current_plugin)

add_library(uuv_spherical_coordinates_plugin SHARED
  src/uuv_world_plugins_spherical_coordinates.cpp
)
ament_target_dependencies(uuv_spherical_coordinates_plugin
  "rclcpp"
  "gazebo_dev"
  "gazebo_ros"
  "uuv_world_ros_plugins_msgs"
)
ament_export_libraries(uuv_spherical_coordinates_plugin)


ament_export_include_directories(include)
ament_export_dependencies(ament_cmake)
ament_export_dependencies(rclcpp)
ament_export_dependencies(gazebo_dev)
ament_export_dependencies(gazebo_ros)

ament_package()

#############
## Install ##
#############

install(TARGETS uuv_underwater_current_plugin
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

## Mark cpp header files for installation
install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION include/
)
