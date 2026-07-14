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
	*dest = *src;
	n--;
	while (n >= 0 && *dest)
	{
		dest++;
		src++;
		*dest = *src;
		n--;
	}
	*dest = '\0';
	return (original_dest);
}
