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

/**
 * print_rev - prints string s in reverse
 * @s: string to be reverse printed
 *
 * Return: void
 */
void print_rev(char *s);

/**
 * rev_string - reverses a string max length 100
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s);

/**
 * puts2 - prints every other character of a string, followed by a new line
 * @str: string to be printed
 *
 * Return: void
 */
void puts2(char *str);

/**
 * puts_half - prints the last half of a string rounded up
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str);

/**
 * print_array - prints n elements of an array of integers, followed by a new line
 * @a: array of integers
 * @n: number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n);

/**
 * _strcpy - copies string src into dest
 * @dest: pointer to copied string
 * @src: pointer to original string
 *
 * Return: pointer to copied string
 */
char *_strcpy(char *dest, char *src);

#include "main.h"
/**
 * _atoi - converts string to an integer
 * @s: string to be converted
 *
 * Return: integer from string
 */
int _atoi(char *s);

/**
 * _strcat - concatenates dest and src
 * @dest: first string
 * @src: second string
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src);

#endif
