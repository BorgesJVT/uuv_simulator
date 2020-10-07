// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/UnderwaterObjectModel.idl
// generated code does not contain a copyright notice
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `added_mass`
// Member `linear_damping`
// Member `linear_damping_forward_speed`
// Member `quadratic_damping`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `cob`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `inertia`
#include "geometry_msgs/msg/detail/inertia__functions.h"

bool
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__init(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * msg)
{
  if (!msg) {
    return false;
  }
  // added_mass
  if (!rosidl_runtime_c__double__Sequence__init(&msg->added_mass, 0)) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(msg);
    return false;
  }
  // linear_damping
  if (!rosidl_runtime_c__double__Sequence__init(&msg->linear_damping, 0)) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(msg);
    return false;
  }
  // linear_damping_forward_speed
  if (!rosidl_runtime_c__double__Sequence__init(&msg->linear_damping_forward_speed, 0)) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(msg);
    return false;
  }
  // quadratic_damping
  if (!rosidl_runtime_c__double__Sequence__init(&msg->quadratic_damping, 0)) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(msg);
    return false;
  }
  // volume
  // bbox_height
  // bbox_length
  // bbox_width
  // fluid_density
  // cob
  if (!geometry_msgs__msg__Vector3__init(&msg->cob)) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(msg);
    return false;
  }
  // neutrally_buoyant
  // inertia
  if (!geometry_msgs__msg__Inertia__init(&msg->inertia)) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(msg);
    return false;
  }
  return true;
}

void
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * msg)
{
  if (!msg) {
    return;
  }
  // added_mass
  rosidl_runtime_c__double__Sequence__fini(&msg->added_mass);
  // linear_damping
  rosidl_runtime_c__double__Sequence__fini(&msg->linear_damping);
  // linear_damping_forward_speed
  rosidl_runtime_c__double__Sequence__fini(&msg->linear_damping_forward_speed);
  // quadratic_damping
  rosidl_runtime_c__double__Sequence__fini(&msg->quadratic_damping);
  // volume
  // bbox_height
  // bbox_length
  // bbox_width
  // fluid_density
  // cob
  geometry_msgs__msg__Vector3__fini(&msg->cob);
  // neutrally_buoyant
  // inertia
  geometry_msgs__msg__Inertia__fini(&msg->inertia);
}

uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel *
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__create()
{
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * msg = (uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel *)malloc(sizeof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel));
  bool success = uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__destroy(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * msg)
{
  if (msg) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(msg);
  }
  free(msg);
}


bool
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__init(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * data = NULL;
  if (size) {
    data = (uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel *)calloc(size, sizeof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(&data[i - 1]);
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
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__fini(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(&array->data[i]);
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

uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence *
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__create(size_t size)
{
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * array = (uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence *)malloc(sizeof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__destroy(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * array)
{
  if (array) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__fini(array);
  }
  free(array);
}
