cmake_minimum_required(VERSION 3.5)
project(rbim_world)

set(FastRTPS_INCLUDE_DIR /opt/ros/foxy/include) 
set(FastRTPS_LIBRARY_RELEASE /opt/ros/foxy/lib/libfastrtps.so)

find_package(ament_cmake REQUIRED)
find_package(gazebo_dev REQUIRED)
find_package(gazebo_ros REQUIRED)

install(DIRECTORY launch worlds models
        DESTINATION share/${PROJECT_NAME}
)

ament_package()
