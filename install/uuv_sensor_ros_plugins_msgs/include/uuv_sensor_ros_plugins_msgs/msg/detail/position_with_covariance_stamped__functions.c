// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_sensor_ros_plugins_msgs:msg/PositionWithCovarianceStamped.idl
// generated code does not contain a copyright notice
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pos`
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance__functions.h"

bool
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__init(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__fini(msg);
    return false;
  }
  // pos
  if (!uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__init(&msg->pos)) {
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__fini(msg);
    return false;
  }
  return true;
}

void
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__fini(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pos
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__fini(&msg->pos);
}

uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped *
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__create()
{
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped * msg = (uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped *)malloc(sizeof(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped));
  bool success = uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__destroy(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped * msg)
{
  if (msg) {
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__fini(msg);
  }
  free(msg);
}


bool
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__Sequence__init(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped * data = NULL;
  if (size) {
    data = (uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped *)calloc(size, sizeof(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__fini(&data[i - 1]);
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
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__Sequence__fini(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__fini(&array->data[i]);
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

uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__Sequence *
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__Sequence__create(size_t size)
{
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__Sequence * array = (uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__Sequence *)malloc(sizeof(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__Sequence__destroy(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__Sequence * array)
{
  if (array) {
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped__Sequence__fini(array);
  }
  free(array);
}
