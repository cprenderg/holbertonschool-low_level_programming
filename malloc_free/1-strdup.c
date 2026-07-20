#include "main.h"
/**
 * _strdup - returns pointer to newly allocated space containing a copy of str
 * @str: string to copy
 *
 * Return: pointer to copied string, or NULL if str = NULL
 */
char *_strdup(char *str)
{
	int len;
	unsigned int i;
	char *copied_str;

	len = 0;
	while (str[len] != '\0')
		len++;
	if (len == 0)
		return (NULL);
	copied_str = malloc(size * sizeof(char));
	if (copied_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copied_str[i] = str[i];
		i++;
	}
	return (copied_str);
}
