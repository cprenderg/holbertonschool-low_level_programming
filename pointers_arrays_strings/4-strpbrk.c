#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to search
 * @accept: characters to search for
 *
 * Return: pointer to first matching byte, or null if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return (NULL);
}
