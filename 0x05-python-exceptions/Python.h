#ifndef PYTHON_H
#define PYTHON_H

#include <Python.h>

void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);
void print_python_float(PyObject *p);
PyObject *safe_function(PyObject *callable, PyObject *args);
void safe_print_integer_err(PyObject *value);
void raise_exception_msg(const char *message);
void raise_exception(void);
PyObject *list_division(PyObject *my_list_1, PyObject *my_list_2,
Py_ssize_t list_length);
void safe_print_division(PyObject *a, PyObject *b);
void safe_print_list_integers(PyObject *my_list, Py_ssize_t x);
void safe_print_integer(PyObject *value);
void safe_print_list(PyObject *my_list, Py_ssize_t x);

#endif

