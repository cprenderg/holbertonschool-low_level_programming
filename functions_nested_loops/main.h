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
#endif
