#include "main.h"
/**
 * leet - encodes string str into 1337
 * @str: string to be encoded
 *
 * Return: str encoded
 */
char *leet(char *str)
{
	char *original_str = str;
	char *letters = "aeotl";
	char *numbers = "43071";
	int i = 0;

	while (*str)
	{
		i = 0;
		while (i <= 4)
		{
			if (*str == letters[i] || *str == letters[i] - 32)
				*str = numbers[i];
			i++;
		}
		str++;
	}
	return (original_str);
}
