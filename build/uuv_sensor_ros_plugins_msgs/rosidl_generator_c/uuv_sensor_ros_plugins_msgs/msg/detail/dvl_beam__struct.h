// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_sensor_ros_plugins_msgs:msg/DVLBeam.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__DVL_BEAM__STRUCT_H_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__DVL_BEAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

// Struct defined in msg/DVLBeam in the package uuv_sensor_ros_plugins_msgs.
typedef struct uuv_sensor_ros_plugins_msgs__msg__DVLBeam
{
  double range;
  double range_covariance;
  double velocity;
  double velocity_covariance;
  geometry_msgs__msg__PoseStamped pose;
} uuv_sensor_ros_plugins_msgs__msg__DVLBeam;

// Struct for a sequence of uuv_sensor_ros_plugins_msgs__msg__DVLBeam.
typedef struct uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence
{
  uuv_sensor_ros_plugins_msgs__msg__DVLBeam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__DVL_BEAM__STRUCT_H_
