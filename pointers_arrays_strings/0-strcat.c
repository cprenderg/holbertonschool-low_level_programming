#include "main.h"
/**
 * _strcat - concatenates dest and src
 * @dest: first string
 * @src: second string
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest;

	original_dest = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (original_dest);
}
