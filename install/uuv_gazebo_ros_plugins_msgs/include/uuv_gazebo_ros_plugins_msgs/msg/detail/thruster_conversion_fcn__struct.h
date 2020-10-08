// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/ThrusterConversionFcn.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__THRUSTER_CONVERSION_FCN__STRUCT_H_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__THRUSTER_CONVERSION_FCN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'function_name'
// Member 'tags'
#include "rosidl_runtime_c/string.h"
// Member 'data'
// Member 'lookup_table_input'
// Member 'lookup_table_output'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/ThrusterConversionFcn in the package uuv_gazebo_ros_plugins_msgs.
typedef struct uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn
{
  rosidl_runtime_c__String function_name;
  rosidl_runtime_c__String__Sequence tags;
  rosidl_runtime_c__double__Sequence data;
  rosidl_runtime_c__double__Sequence lookup_table_input;
  rosidl_runtime_c__double__Sequence lookup_table_output;
} uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn;

// Struct for a sequence of uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn.
typedef struct uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence
{
  uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__THRUSTER_CONVERSION_FCN__STRUCT_H_
