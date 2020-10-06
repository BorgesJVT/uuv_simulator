cmake_minimum_required(VERSION 3.5)
project(uuv_gazebo_worlds)

set(FastRTPS_INCLUDE_DIR /opt/ros/foxy/include) 
set(FastRTPS_LIBRARY_RELEASE /opt/ros/foxy/lib/libfastrtps.so)

find_package(ament_cmake REQUIRED)
find_package(gazebo_dev REQUIRED)
find_package(gazebo_ros REQUIRED)

install(DIRECTORY launch media worlds models
        DESTINATION share/${PROJECT_NAME}
)

ament_package()
