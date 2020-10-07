// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_sensor_ros_plugins_msgs:msg/DVL.idl
// generated code does not contain a copyright notice
#include "uuv_sensor_ros_plugins_msgs/msg/detail/dvl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `beams`
#include "uuv_sensor_ros_plugins_msgs/msg/detail/dvl_beam__functions.h"

bool
uuv_sensor_ros_plugins_msgs__msg__DVL__init(uuv_sensor_ros_plugins_msgs__msg__DVL * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    uuv_sensor_ros_plugins_msgs__msg__DVL__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    uuv_sensor_ros_plugins_msgs__msg__DVL__fini(msg);
    return false;
  }
  // velocity_covariance
  // altitude
  // beams
  if (!uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__init(&msg->beams, 0)) {
    uuv_sensor_ros_plugins_msgs__msg__DVL__fini(msg);
    return false;
  }
  return true;
}

void
uuv_sensor_ros_plugins_msgs__msg__DVL__fini(uuv_sensor_ros_plugins_msgs__msg__DVL * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // velocity_covariance
  // altitude
  // beams
  uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__fini(&msg->beams);
}

uuv_sensor_ros_plugins_msgs__msg__DVL *
uuv_sensor_ros_plugins_msgs__msg__DVL__create()
{
  uuv_sensor_ros_plugins_msgs__msg__DVL * msg = (uuv_sensor_ros_plugins_msgs__msg__DVL *)malloc(sizeof(uuv_sensor_ros_plugins_msgs__msg__DVL));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_sensor_ros_plugins_msgs__msg__DVL));
  bool success = uuv_sensor_ros_plugins_msgs__msg__DVL__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
uuv_sensor_ros_plugins_msgs__msg__DVL__destroy(uuv_sensor_ros_plugins_msgs__msg__DVL * msg)
{
  if (msg) {
    uuv_sensor_ros_plugins_msgs__msg__DVL__fini(msg);
  }
  free(msg);
}


bool
uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence__init(uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  uuv_sensor_ros_plugins_msgs__msg__DVL * data = NULL;
  if (size) {
    data = (uuv_sensor_ros_plugins_msgs__msg__DVL *)calloc(size, sizeof(uuv_sensor_ros_plugins_msgs__msg__DVL));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_sensor_ros_plugins_msgs__msg__DVL__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_sensor_ros_plugins_msgs__msg__DVL__fini(&data[i - 1]);
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
uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence__fini(uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_sensor_ros_plugins_msgs__msg__DVL__fini(&array->data[i]);
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

uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence *
uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence__create(size_t size)
{
  uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence * array = (uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence *)malloc(sizeof(uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence__destroy(uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence * array)
{
  if (array) {
    uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence__fini(array);
  }
  free(array);
}
