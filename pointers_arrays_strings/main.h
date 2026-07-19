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

/**
 * _strncat - concatenates dest and src
 * @dest: first string
 * @src: second string
 * @n: the most bytes usable from src
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies a string src into dest
 * @dest: where src is copied to
 * @src: string to be copied
 * @n: max number of characters
 *
 * Return: copied string dest
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: the ASCII difference of the first non-matching characters
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: the size of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @str: string to change
 *
 * Return: string
 */
char *string_toupper(char *str);

/**
 * cap_string - captilises the first letter of all words
 * @str: string to capitilise
 *
 * Return: capitlised string
 */
char *cap_string(char *str);

/**
 * leet - encodes string str into 1337
 * @str: string to be encoded
 *
 * Return: str encoded
 */
char *leet(char *str);

#include "main.h"
/**
 * _memset - fills the first n bytes of memory area pointed by s with b
 * @n: number of bytes
 * @s: memory area
 * @b: byte to fill with with
 *
 * Return: pointer to memory set
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory area from src to dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in s
 * @s: string to find character in
 * @c: character to find
 *
 * Return: pointer to first c in s, or NULL if not found
 */
char *_strchr(char *s, char c);
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: characters to accept
 *
 * Return: number of bytes in the prefix substring of s
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to search
 * @accept: characters to search for
 *
 * Return: pointer to first matching byte, or null if no match
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates a substring in haystack
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to beginning of substring, or NULL
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - prints a chessboard
 * @a: chessboard array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8]);
#endif
