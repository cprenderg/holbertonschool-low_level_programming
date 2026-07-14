#include "main.h"
/**
 * _strncpy - copies a string src into dest
 * @dest: where src is copied to
 * @src: string to be copied
 * @n: max number of characters
 *
 * Return: copied string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest;

	original_dest = dest;
	while (n >= 0)
	{
		if (*src == '\0')
		{
			*dest = '\0';
			dest++;
			n--;
		}
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
