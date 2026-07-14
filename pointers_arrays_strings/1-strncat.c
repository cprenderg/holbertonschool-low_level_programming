#include "main.h"
/**
 * _strncat - concatenates dest and src
 * @dest: first string
 * @src: second string
 * @n: the most bytes usable from src
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest;

	original_dest = dest;
	while (*dest)
		dest++;
	while (n >= 0)
	{
		if (*dest)
			break;
		else
		{
			*dest = *src;
			dest++;
			src++;
			n--;
		}
	}
	return (original_dest);
}
