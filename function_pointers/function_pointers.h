#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to call
 * Return: void
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - executes a function on each element of an array
 * @array: array to iterate over
 * @size: size of array
 * @action: function to execute on each element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
