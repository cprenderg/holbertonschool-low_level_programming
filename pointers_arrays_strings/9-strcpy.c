#include "main.h"
/**
 * _strcpy - copies string src into dest
 * @dest: pointer to copied string
 * @src: pointer to original string
 *
 * Return: pointer to copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
