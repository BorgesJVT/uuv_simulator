// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_sensor_ros_plugins_msgs:msg/ChemicalParticleConcentration.idl
// generated code does not contain a copyright notice
#include "uuv_sensor_ros_plugins_msgs/msg/detail/chemical_particle_concentration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__init(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__fini(msg);
    return false;
  }
  // latitude
  // longitude
  // depth
  // concentration
  // is_measuring
  return true;
}

void
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__fini(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
  // latitude
  // longitude
  // depth
  // concentration
  // is_measuring
}

uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration *
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__create()
{
  uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration * msg = (uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration *)malloc(sizeof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration));
  bool success = uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__destroy(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration * msg)
{
  if (msg) {
    uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__fini(msg);
  }
  free(msg);
}


bool
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence__init(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration * data = NULL;
  if (size) {
    data = (uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration *)calloc(size, sizeof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__fini(&data[i - 1]);
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
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence__fini(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__fini(&array->data[i]);
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

uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence *
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence__create(size_t size)
{
  uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence * array = (uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence *)malloc(sizeof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence__destroy(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence * array)
{
  if (array) {
    uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence__fini(array);
  }
  free(array);
}
