// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/ThrusterConversionFcn.idl
// generated code does not contain a copyright notice
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `function_name`
// Member `tags`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
// Member `lookup_table_input`
// Member `lookup_table_output`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__init(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn * msg)
{
  if (!msg) {
    return false;
  }
  // function_name
  if (!rosidl_runtime_c__String__init(&msg->function_name)) {
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(msg);
    return false;
  }
  // tags
  if (!rosidl_runtime_c__String__Sequence__init(&msg->tags, 0)) {
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__init(&msg->data, 0)) {
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(msg);
    return false;
  }
  // lookup_table_input
  if (!rosidl_runtime_c__double__Sequence__init(&msg->lookup_table_input, 0)) {
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(msg);
    return false;
  }
  // lookup_table_output
  if (!rosidl_runtime_c__double__Sequence__init(&msg->lookup_table_output, 0)) {
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(msg);
    return false;
  }
  return true;
}

void
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn * msg)
{
  if (!msg) {
    return;
  }
  // function_name
  rosidl_runtime_c__String__fini(&msg->function_name);
  // tags
  rosidl_runtime_c__String__Sequence__fini(&msg->tags);
  // data
  rosidl_runtime_c__double__Sequence__fini(&msg->data);
  // lookup_table_input
  rosidl_runtime_c__double__Sequence__fini(&msg->lookup_table_input);
  // lookup_table_output
  rosidl_runtime_c__double__Sequence__fini(&msg->lookup_table_output);
}

uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn *
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__create()
{
  uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn * msg = (uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn *)malloc(sizeof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn));
  bool success = uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__destroy(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn * msg)
{
  if (msg) {
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(msg);
  }
  free(msg);
}


bool
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence__init(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn * data = NULL;
  if (size) {
    data = (uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn *)calloc(size, sizeof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(&data[i - 1]);
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
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence__fini(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(&array->data[i]);
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

uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence *
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence__create(size_t size)
{
  uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence * array = (uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence *)malloc(sizeof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence__destroy(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence * array)
{
  if (array) {
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence__fini(array);
  }
  free(array);
}
