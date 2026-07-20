#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len1;
	int len2;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		concat_str[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		concat_str[i] = *s2;
		s2++;
		i++;
	}
	concat_str[i] = '\0';
	return (concat_str);
}
