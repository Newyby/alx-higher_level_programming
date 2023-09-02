#ifndef PHY_H
#define PHY_H

#include <Python.h>

void print_python_string(PyObject *p);
void lazy_matrix_mul(PyObject *m_a, PyObject *m_b);
void text_indentation(const char *text);
void print_square(int size);
void say_my_name(const char *first_name, const char *last_name);
void matrix_divided(double **matrix, int rows, int cols, double div);
int add_integer(int a, int b);
int max_integer(int *list, int size);

#endif // PHY_H

