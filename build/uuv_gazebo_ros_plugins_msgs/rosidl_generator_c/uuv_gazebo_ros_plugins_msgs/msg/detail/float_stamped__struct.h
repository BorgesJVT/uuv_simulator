// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/FloatStamped.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__FLOAT_STAMPED__STRUCT_H_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__FLOAT_STAMPED__STRUCT_H_

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

// Struct defined in msg/FloatStamped in the package uuv_gazebo_ros_plugins_msgs.
typedef struct uuv_gazebo_ros_plugins_msgs__msg__FloatStamped
{
  std_msgs__msg__Header header;
  double data;
} uuv_gazebo_ros_plugins_msgs__msg__FloatStamped;

// Struct for a sequence of uuv_gazebo_ros_plugins_msgs__msg__FloatStamped.
typedef struct uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence
{
  uuv_gazebo_ros_plugins_msgs__msg__FloatStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__FLOAT_STAMPED__STRUCT_H_
