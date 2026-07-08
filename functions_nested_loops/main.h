#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * One error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints the alphabet ten times in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void);

/**
 * _islower - checks if a character is lowercase
 * @c: character to check
 *
 * Return: 1 if lower, 0 if else
 */
int _islower(int);

/**
 * _isalpha - checks if a character is a letter
 * @c: character to check
 *
 * Return: 1 if letter, 0 if else
 */
int _isalpha(int);

/**
 * print_sign - checks if n is positive, negative, or zero
 * @n: integer to check
 *
 * Return: 1 and prints + if n is greater than zero
 * Return: 0 and prints 0 if n is zero
 * Return: -1 and prints - if n is less than zero
 */
int print_sign(int n);

/**
 * _abs - computes absolute value of an integer
 * @int: integer to check
 *
 * Return: The absolute value of the integer
 */
int _abs(int);

#endif
