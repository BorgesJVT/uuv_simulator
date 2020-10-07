// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/UnderwaterObjectModel.idl
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
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__struct.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__inertia__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__inertia__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool uuv_gazebo_ros_plugins_msgs__msg__underwater_object_model__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[79];
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
    assert(strncmp("uuv_gazebo_ros_plugins_msgs.msg._underwater_object_model.UnderwaterObjectModel", full_classname_dest, 78) == 0);
  }
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * ros_message = _ros_message;
  {  // added_mass
    PyObject * field = PyObject_GetAttrString(_pymsg, "added_mass");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'added_mass'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->added_mass), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    double * dest = ros_message->added_mass.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyFloat_Check(item));
      double tmp = PyFloat_AS_DOUBLE(item);
      memcpy(&dest[i], &tmp, sizeof(double));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // linear_damping
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear_damping");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'linear_damping'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->linear_damping), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    double * dest = ros_message->linear_damping.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyFloat_Check(item));
      double tmp = PyFloat_AS_DOUBLE(item);
      memcpy(&dest[i], &tmp, sizeof(double));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // linear_damping_forward_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear_damping_forward_speed");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'linear_damping_forward_speed'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->linear_damping_forward_speed), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    double * dest = ros_message->linear_damping_forward_speed.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyFloat_Check(item));
      double tmp = PyFloat_AS_DOUBLE(item);
      memcpy(&dest[i], &tmp, sizeof(double));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // quadratic_damping
    PyObject * field = PyObject_GetAttrString(_pymsg, "quadratic_damping");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'quadratic_damping'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->quadratic_damping), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    double * dest = ros_message->quadratic_damping.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyFloat_Check(item));
      double tmp = PyFloat_AS_DOUBLE(item);
      memcpy(&dest[i], &tmp, sizeof(double));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // volume
    PyObject * field = PyObject_GetAttrString(_pymsg, "volume");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->volume = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bbox_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "bbox_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bbox_height = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bbox_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "bbox_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bbox_length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bbox_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "bbox_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bbox_width = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fluid_density
    PyObject * field = PyObject_GetAttrString(_pymsg, "fluid_density");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fluid_density = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cob
    PyObject * field = PyObject_GetAttrString(_pymsg, "cob");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->cob)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // neutrally_buoyant
    PyObject * field = PyObject_GetAttrString(_pymsg, "neutrally_buoyant");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->neutrally_buoyant = (Py_True == field);
    Py_DECREF(field);
  }
  {  // inertia
    PyObject * field = PyObject_GetAttrString(_pymsg, "inertia");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__inertia__convert_from_py(field, &ros_message->inertia)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * uuv_gazebo_ros_plugins_msgs__msg__underwater_object_model__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UnderwaterObjectModel */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("uuv_gazebo_ros_plugins_msgs.msg._underwater_object_model");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UnderwaterObjectModel");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * ros_message = (uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel *)raw_ros_message;
  {  // added_mass
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "added_mass");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->added_mass.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->added_mass.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->added_mass.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // linear_damping
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "linear_damping");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->linear_damping.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->linear_damping.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->linear_damping.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // linear_damping_forward_speed
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "linear_damping_forward_speed");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->linear_damping_forward_speed.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->linear_damping_forward_speed.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->linear_damping_forward_speed.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // quadratic_damping
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "quadratic_damping");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->quadratic_damping.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->quadratic_damping.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->quadratic_damping.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // volume
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->volume);
    {
      int rc = PyObject_SetAttrString(_pymessage, "volume", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bbox_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bbox_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bbox_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bbox_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bbox_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bbox_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bbox_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bbox_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bbox_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fluid_density
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fluid_density);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fluid_density", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cob
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->cob);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cob", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // neutrally_buoyant
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->neutrally_buoyant ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "neutrally_buoyant", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inertia
    PyObject * field = NULL;
    field = geometry_msgs__msg__inertia__convert_to_py(&ros_message->inertia);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "inertia", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
