// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetListParam.idl
// generated code does not contain a copyright notice
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_list_param__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__init(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__fini(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request *
uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__create()
{
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request * msg = (uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request *)malloc(sizeof(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request));
  bool success = uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__destroy(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request * msg)
{
  if (msg) {
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__fini(msg);
  }
  free(msg);
}


bool
uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__Sequence__init(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request * data = NULL;
  if (size) {
    data = (uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request *)calloc(size, sizeof(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__fini(&data[i - 1]);
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
uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__Sequence__fini(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__fini(&array->data[i]);
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

uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__Sequence *
uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__Sequence__create(size_t size)
{
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__Sequence * array = (uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__Sequence *)malloc(sizeof(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__Sequence__destroy(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__Sequence * array)
{
  if (array) {
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `description`
// Member `tags`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__init(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response * msg)
{
  if (!msg) {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__fini(msg);
    return false;
  }
  // tags
  if (!rosidl_runtime_c__String__Sequence__init(&msg->tags, 0)) {
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__init(&msg->data, 0)) {
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__fini(msg);
    return false;
  }
  return true;
}

void
uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__fini(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response * msg)
{
  if (!msg) {
    return;
  }
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // tags
  rosidl_runtime_c__String__Sequence__fini(&msg->tags);
  // data
  rosidl_runtime_c__double__Sequence__fini(&msg->data);
}

uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response *
uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__create()
{
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response * msg = (uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response *)malloc(sizeof(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response));
  bool success = uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__destroy(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response * msg)
{
  if (msg) {
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__fini(msg);
  }
  free(msg);
}


bool
uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__Sequence__init(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response * data = NULL;
  if (size) {
    data = (uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response *)calloc(size, sizeof(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__fini(&data[i - 1]);
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
uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__Sequence__fini(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__fini(&array->data[i]);
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

uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__Sequence *
uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__Sequence__create(size_t size)
{
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__Sequence * array = (uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__Sequence *)malloc(sizeof(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__Sequence__destroy(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__Sequence * array)
{
  if (array) {
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__Sequence__fini(array);
  }
  free(array);
}
