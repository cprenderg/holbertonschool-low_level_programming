#include "main.h"
/**
 * cap_string - captilises the first letter of all words
 * @str: string to capitilise
 *
 * Return: capitlised string
 */
char *cap_string(char *str)
{
	char *original_str = str;
	int first_char = 1;

	while (*str)
	{
		if (first_char)
		{
			if (*str >= 'a' && *str <= 'z')
				*str = *str - 32;
			first_char = 0;
		}
		switch (*str)
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				first_char = 1;
				break;
			default:
				first_char = 0;
				break;
		}
		str++;
	}
	return (original_str);
}
