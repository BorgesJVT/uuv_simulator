// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_sensor_ros_plugins_msgs:msg/Salinity.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__SALINITY__STRUCT_H_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__SALINITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PSU'.
static const char * const uuv_sensor_ros_plugins_msgs__msg__Salinity__PSU = "psu";

/// Constant 'PPM'.
static const char * const uuv_sensor_ros_plugins_msgs__msg__Salinity__PPM = "ppm";

/// Constant 'PPT'.
static const char * const uuv_sensor_ros_plugins_msgs__msg__Salinity__PPT = "ppt";

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'unit'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Salinity in the package uuv_sensor_ros_plugins_msgs.
typedef struct uuv_sensor_ros_plugins_msgs__msg__Salinity
{
  std_msgs__msg__Header header;
  double salinity;
  double variance;
  rosidl_runtime_c__String unit;
} uuv_sensor_ros_plugins_msgs__msg__Salinity;

// Struct for a sequence of uuv_sensor_ros_plugins_msgs__msg__Salinity.
typedef struct uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence
{
  uuv_sensor_ros_plugins_msgs__msg__Salinity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__SALINITY__STRUCT_H_
