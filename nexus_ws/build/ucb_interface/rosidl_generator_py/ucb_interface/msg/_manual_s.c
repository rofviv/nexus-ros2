// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ucb_interface:msg/Manual.idl
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
#include "ucb_interface/msg/detail/manual__struct.h"
#include "ucb_interface/msg/detail/manual__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ucb_interface__msg__manual__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("ucb_interface.msg._manual.Manual", full_classname_dest, 32) == 0);
  }
  ucb_interface__msg__Manual * ros_message = _ros_message;
  {  // puerta
    PyObject * field = PyObject_GetAttrString(_pymsg, "puerta");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->puerta = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reversa
    PyObject * field = PyObject_GetAttrString(_pymsg, "reversa");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reversa = (Py_True == field);
    Py_DECREF(field);
  }
  {  // freno
    PyObject * field = PyObject_GetAttrString(_pymsg, "freno");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->freno = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ucb_interface__msg__manual__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Manual */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ucb_interface.msg._manual");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Manual");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ucb_interface__msg__Manual * ros_message = (ucb_interface__msg__Manual *)raw_ros_message;
  {  // puerta
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->puerta ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "puerta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reversa
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reversa ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reversa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // freno
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->freno ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "freno", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
