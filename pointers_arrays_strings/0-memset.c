#include "main.h"
/**
 * _memset - fills the first n bytes of memory area pointed by s with b
 * @n: number of bytes
 * @s: memory area
 * @b: byte to fill with with
 *
 * Return: pointer to memory set
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
