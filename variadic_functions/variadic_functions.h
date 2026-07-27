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

/**
 * print_numbers - prints all n separated by separator
 * @separator: characters to separate numbers with
 * @n: amount numbers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - prints string followed by a new line
 * @separator: what should separate each string
 * @n: amount of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...);
#endif
