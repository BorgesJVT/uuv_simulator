// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_sensor_ros_plugins_msgs:msg/PositionWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE_STAMPED__STRUCT_H_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pos'
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance__struct.h"

// Struct defined in msg/PositionWithCovarianceStamped in the package uuv_sensor_ros_plugins_msgs.
typedef struct uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped
{
  std_msgs__msg__Header header;
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance pos;
} uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped;

// Struct for a sequence of uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped.
typedef struct uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__Sequence
{
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE_STAMPED__STRUCT_H_
