#include "main.h"
/**
 * _strchr - locates a character in s
 * @s: string to find character in
 * @c: character to find
 *
 * Return: pointer to first c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
