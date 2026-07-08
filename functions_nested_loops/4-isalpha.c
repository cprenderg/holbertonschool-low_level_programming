#include "main.h"
/**
 * _isalpha - checks if c is a letter
 * @c: The character to check
 *
 * Return: 1 if letter, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
