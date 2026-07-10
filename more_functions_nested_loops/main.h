#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * _isupper - checks if c is uppercase
 * @c: character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - checks if c is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);

/**
 * mul - multiplies a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int mul(int a, int b);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * One error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_numbers - prints 0 to 9, followed by a new line
 *
 * Return: void
 */
void print_numbers(void);

/**
 * print_most_numbers - prints 0 to 9, except 2 and 4, followed by a new line
 *
 * Return: void
 */
void print_most_numbers(void);

/**
 * more_numbers - prints 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void);

/**
 * print_line - prints a line that is n long
 * @n: length of line
 *
 * Return: void
 */
void print_line(int n);

/**
 * print_diagonal - prints a diagonal line that is n long
 * @n: length of diagonal line
 *
 * Return: void
 */
void print_diagonal(int n);

#endif
