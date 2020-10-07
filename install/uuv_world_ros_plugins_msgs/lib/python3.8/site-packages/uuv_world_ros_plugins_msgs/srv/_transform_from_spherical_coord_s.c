// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from uuv_world_ros_plugins_msgs:srv/TransformFromSphericalCoord.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "uuv_world_ros_plugins_msgs/srv/detail/transform_from_spherical_coord__struct.h"
#include "uuv_world_ros_plugins_msgs/srv/detail/transform_from_spherical_coord__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool uuv_world_ros_plugins_msgs__srv__transform_from_spherical_coord__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[99];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("uuv_world_ros_plugins_msgs.srv._transform_from_spherical_coord.TransformFromSphericalCoord_Request", full_classname_dest, 98) == 0);
  }
  uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Request * ros_message = _ros_message;
  {  // latitude_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude_deg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude_deg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * uuv_world_ros_plugins_msgs__srv__transform_from_spherical_coord__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TransformFromSphericalCoord_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("uuv_world_ros_plugins_msgs.srv._transform_from_spherical_coord");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TransformFromSphericalCoord_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Request * ros_message = (uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Request *)raw_ros_message;
  {  // latitude_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "uuv_world_ros_plugins_msgs/srv/detail/transform_from_spherical_coord__struct.h"
// already included above
// #include "uuv_world_ros_plugins_msgs/srv/detail/transform_from_spherical_coord__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool uuv_world_ros_plugins_msgs__srv__transform_from_spherical_coord__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[100];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("uuv_world_ros_plugins_msgs.srv._transform_from_spherical_coord.TransformFromSphericalCoord_Response", full_classname_dest, 99) == 0);
  }
  uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Response * ros_message = _ros_message;
  {  // output
    PyObject * field = PyObject_GetAttrString(_pymsg, "output");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->output)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * uuv_world_ros_plugins_msgs__srv__transform_from_spherical_coord__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TransformFromSphericalCoord_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("uuv_world_ros_plugins_msgs.srv._transform_from_spherical_coord");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TransformFromSphericalCoord_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Response * ros_message = (uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Response *)raw_ros_message;
  {  // output
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->output);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
