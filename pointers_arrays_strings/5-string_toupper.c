#include "main.h"
/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @str: string to change
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	char *original_str = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (original_str);
}
