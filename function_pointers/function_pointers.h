#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to call
 * Return: void
 */
void print_name(char *name, void (*f)(char *));
