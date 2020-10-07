// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_sensor_ros_plugins_msgs:msg/DVLBeam.idl
// generated code does not contain a copyright notice
#include "uuv_sensor_ros_plugins_msgs/msg/detail/dvl_beam__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__init(uuv_sensor_ros_plugins_msgs__msg__DVLBeam * msg)
{
  if (!msg) {
    return false;
  }
  // range
  // range_covariance
  // velocity
  // velocity_covariance
  // pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose)) {
    uuv_sensor_ros_plugins_msgs__msg__DVLBeam__fini(msg);
    return false;
  }
  return true;
}

void
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__fini(uuv_sensor_ros_plugins_msgs__msg__DVLBeam * msg)
{
  if (!msg) {
    return;
  }
  // range
  // range_covariance
  // velocity
  // velocity_covariance
  // pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pose);
}

uuv_sensor_ros_plugins_msgs__msg__DVLBeam *
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__create()
{
  uuv_sensor_ros_plugins_msgs__msg__DVLBeam * msg = (uuv_sensor_ros_plugins_msgs__msg__DVLBeam *)malloc(sizeof(uuv_sensor_ros_plugins_msgs__msg__DVLBeam));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_sensor_ros_plugins_msgs__msg__DVLBeam));
  bool success = uuv_sensor_ros_plugins_msgs__msg__DVLBeam__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__destroy(uuv_sensor_ros_plugins_msgs__msg__DVLBeam * msg)
{
  if (msg) {
    uuv_sensor_ros_plugins_msgs__msg__DVLBeam__fini(msg);
  }
  free(msg);
}


bool
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__init(uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  uuv_sensor_ros_plugins_msgs__msg__DVLBeam * data = NULL;
  if (size) {
    data = (uuv_sensor_ros_plugins_msgs__msg__DVLBeam *)calloc(size, sizeof(uuv_sensor_ros_plugins_msgs__msg__DVLBeam));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_sensor_ros_plugins_msgs__msg__DVLBeam__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_sensor_ros_plugins_msgs__msg__DVLBeam__fini(&data[i - 1]);
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
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__fini(uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_sensor_ros_plugins_msgs__msg__DVLBeam__fini(&array->data[i]);
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

uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence *
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__create(size_t size)
{
  uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * array = (uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence *)malloc(sizeof(uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__destroy(uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * array)
{
  if (array) {
    uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__fini(array);
  }
  free(array);
}
