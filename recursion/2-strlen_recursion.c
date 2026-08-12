#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to measure length
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 1;
	if (*s == '\0')
		return (0);
	len += _strlen_recursion(s + 1);
	return (len);
}
