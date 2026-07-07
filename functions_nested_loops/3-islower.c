#include "main.h"
/**
 * islower - checks if c is lowercase
 * @c: The character to check
 *
 * Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
