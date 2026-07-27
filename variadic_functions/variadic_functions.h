#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: integers to add
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...);
#endif
