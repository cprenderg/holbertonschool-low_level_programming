#include "main.h"
/**
 * rev_string - reverses a string max length 100
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char rev[100];

	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		rev[i] = s[j];
		i--;
		j++;
	}
	i = 0;
	while (rev[i])
	{
		s[i] = rev[i];
		i++;
	}
}
