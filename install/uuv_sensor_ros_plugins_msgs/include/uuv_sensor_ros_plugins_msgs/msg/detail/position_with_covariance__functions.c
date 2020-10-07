// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_sensor_ros_plugins_msgs:msg/PositionWithCovariance.idl
// generated code does not contain a copyright notice
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pos`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__init(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance * msg)
{
  if (!msg) {
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__init(&msg->pos)) {
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__fini(msg);
    return false;
  }
  // covariance
  return true;
}

void
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__fini(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance * msg)
{
  if (!msg) {
    return;
  }
  // pos
  geometry_msgs__msg__Point__fini(&msg->pos);
  // covariance
}

uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance *
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__create()
{
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance * msg = (uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance *)malloc(sizeof(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance));
  bool success = uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__destroy(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance * msg)
{
  if (msg) {
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__fini(msg);
  }
  free(msg);
}


bool
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence__init(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance * data = NULL;
  if (size) {
    data = (uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance *)calloc(size, sizeof(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence__fini(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence *
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence__create(size_t size)
{
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence * array = (uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence *)malloc(sizeof(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence__destroy(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence * array)
{
  if (array) {
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence__fini(array);
  }
  free(array);
}
