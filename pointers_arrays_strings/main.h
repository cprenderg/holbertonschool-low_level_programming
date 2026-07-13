#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * reset_to_98 - sets *n to 98
 * @*n: pointer to set to 98
 *
 * Return: void
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the value of two variables
 * @a: first variable
 * @b: second variable
 *
 * Return: void
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of string s
 * @s: string to be calculated
 *
 * Return: length of s
 */
int _strlen(char *s);

/**
 * _puts - prints string str followed by a new line
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * One error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
#endif
