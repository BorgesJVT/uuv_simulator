// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_sensor_ros_plugins_msgs:msg/Salinity.idl
// generated code does not contain a copyright notice
#include "uuv_sensor_ros_plugins_msgs/msg/detail/salinity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `unit`
#include "rosidl_runtime_c/string_functions.h"

bool
uuv_sensor_ros_plugins_msgs__msg__Salinity__init(uuv_sensor_ros_plugins_msgs__msg__Salinity * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    uuv_sensor_ros_plugins_msgs__msg__Salinity__fini(msg);
    return false;
  }
  // salinity
  // variance
  // unit
  if (!rosidl_runtime_c__String__init(&msg->unit)) {
    uuv_sensor_ros_plugins_msgs__msg__Salinity__fini(msg);
    return false;
  }
  return true;
}

void
uuv_sensor_ros_plugins_msgs__msg__Salinity__fini(uuv_sensor_ros_plugins_msgs__msg__Salinity * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // salinity
  // variance
  // unit
  rosidl_runtime_c__String__fini(&msg->unit);
}

uuv_sensor_ros_plugins_msgs__msg__Salinity *
uuv_sensor_ros_plugins_msgs__msg__Salinity__create()
{
  uuv_sensor_ros_plugins_msgs__msg__Salinity * msg = (uuv_sensor_ros_plugins_msgs__msg__Salinity *)malloc(sizeof(uuv_sensor_ros_plugins_msgs__msg__Salinity));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_sensor_ros_plugins_msgs__msg__Salinity));
  bool success = uuv_sensor_ros_plugins_msgs__msg__Salinity__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
uuv_sensor_ros_plugins_msgs__msg__Salinity__destroy(uuv_sensor_ros_plugins_msgs__msg__Salinity * msg)
{
  if (msg) {
    uuv_sensor_ros_plugins_msgs__msg__Salinity__fini(msg);
  }
  free(msg);
}


bool
uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence__init(uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  uuv_sensor_ros_plugins_msgs__msg__Salinity * data = NULL;
  if (size) {
    data = (uuv_sensor_ros_plugins_msgs__msg__Salinity *)calloc(size, sizeof(uuv_sensor_ros_plugins_msgs__msg__Salinity));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_sensor_ros_plugins_msgs__msg__Salinity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_sensor_ros_plugins_msgs__msg__Salinity__fini(&data[i - 1]);
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
uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence__fini(uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_sensor_ros_plugins_msgs__msg__Salinity__fini(&array->data[i]);
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

uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence *
uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence__create(size_t size)
{
  uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence * array = (uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence *)malloc(sizeof(uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence__destroy(uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence * array)
{
  if (array) {
    uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence__fini(array);
  }
  free(array);
}
