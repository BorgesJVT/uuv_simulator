// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from uuv_world_ros_plugins_msgs:srv/SetCurrentModel.idl
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
#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_model__struct.h"
#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_model__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool uuv_world_ros_plugins_msgs__srv__set_current_model__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[74];
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
    assert(strncmp("uuv_world_ros_plugins_msgs.srv._set_current_model.SetCurrentModel_Request", full_classname_dest, 73) == 0);
  }
  uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request * ros_message = _ros_message;
  {  // mean
    PyObject * field = PyObject_GetAttrString(_pymsg, "mean");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mean = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min
    PyObject * field = PyObject_GetAttrString(_pymsg, "min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max
    PyObject * field = PyObject_GetAttrString(_pymsg, "max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // noise
    PyObject * field = PyObject_GetAttrString(_pymsg, "noise");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->noise = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mu
    PyObject * field = PyObject_GetAttrString(_pymsg, "mu");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mu = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * uuv_world_ros_plugins_msgs__srv__set_current_model__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetCurrentModel_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("uuv_world_ros_plugins_msgs.srv._set_current_model");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetCurrentModel_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request * ros_message = (uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request *)raw_ros_message;
  {  // mean
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mean);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mean", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // noise
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->noise);
    {
      int rc = PyObject_SetAttrString(_pymessage, "noise", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mu
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mu", field);
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
// #include "uuv_world_ros_plugins_msgs/srv/detail/set_current_model__struct.h"
// already included above
// #include "uuv_world_ros_plugins_msgs/srv/detail/set_current_model__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool uuv_world_ros_plugins_msgs__srv__set_current_model__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
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
    assert(strncmp("uuv_world_ros_plugins_msgs.srv._set_current_model.SetCurrentModel_Response", full_classname_dest, 74) == 0);
  }
  uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * uuv_world_ros_plugins_msgs__srv__set_current_model__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetCurrentModel_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("uuv_world_ros_plugins_msgs.srv._set_current_model");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetCurrentModel_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response * ros_message = (uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
