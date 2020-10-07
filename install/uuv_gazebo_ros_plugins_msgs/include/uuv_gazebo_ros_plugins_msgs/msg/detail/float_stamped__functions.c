// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/FloatStamped.idl
// generated code does not contain a copyright notice
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/float_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__init(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__fini(msg);
    return false;
  }
  // data
  return true;
}

void
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__fini(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
}

uuv_gazebo_ros_plugins_msgs__msg__FloatStamped *
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__create()
{
  uuv_gazebo_ros_plugins_msgs__msg__FloatStamped * msg = (uuv_gazebo_ros_plugins_msgs__msg__FloatStamped *)malloc(sizeof(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped));
  bool success = uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__destroy(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped * msg)
{
  if (msg) {
    uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__fini(msg);
  }
  free(msg);
}


bool
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence__init(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  uuv_gazebo_ros_plugins_msgs__msg__FloatStamped * data = NULL;
  if (size) {
    data = (uuv_gazebo_ros_plugins_msgs__msg__FloatStamped *)calloc(size, sizeof(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__fini(&data[i - 1]);
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
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence__fini(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__fini(&array->data[i]);
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

uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence *
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence__create(size_t size)
{
  uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence * array = (uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence *)malloc(sizeof(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence__destroy(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence * array)
{
  if (array) {
    uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence__fini(array);
  }
  free(array);
}
