// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_world_ros_plugins_msgs:srv/SetCurrentDirection.idl
// generated code does not contain a copyright notice
#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_direction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__init(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request * msg)
{
  if (!msg) {
    return false;
  }
  // angle
  return true;
}

void
uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__fini(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request * msg)
{
  if (!msg) {
    return;
  }
  // angle
}

uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request *
uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__create()
{
  uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request * msg = (uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request *)malloc(sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request));
  bool success = uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__destroy(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request * msg)
{
  if (msg) {
    uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__fini(msg);
  }
  free(msg);
}


bool
uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__Sequence__init(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request * data = NULL;
  if (size) {
    data = (uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request *)calloc(size, sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__fini(&data[i - 1]);
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
uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__Sequence__fini(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__fini(&array->data[i]);
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

uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__Sequence *
uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__Sequence__create(size_t size)
{
  uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__Sequence * array = (uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__Sequence *)malloc(sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__Sequence__destroy(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__Sequence * array)
{
  if (array) {
    uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__Sequence__fini(array);
  }
  free(array);
}


bool
uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__init(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__fini(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response *
uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__create()
{
  uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response * msg = (uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response *)malloc(sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response));
  bool success = uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__destroy(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response * msg)
{
  if (msg) {
    uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__fini(msg);
  }
  free(msg);
}


bool
uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__Sequence__init(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response * data = NULL;
  if (size) {
    data = (uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response *)calloc(size, sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__fini(&data[i - 1]);
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
uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__Sequence__fini(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__fini(&array->data[i]);
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

uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__Sequence *
uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__Sequence__create(size_t size)
{
  uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__Sequence * array = (uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__Sequence *)malloc(sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__Sequence__destroy(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__Sequence * array)
{
  if (array) {
    uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__Sequence__fini(array);
  }
  free(array);
}
