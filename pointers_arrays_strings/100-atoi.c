#include "main.h"
/**
 * _atoi - converts string to an integer
 * @s: string to be converted
 *
 * Return: integer from string
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int j = 0;
	int neg = 0;
	int INT_MAX = 2147483647;

	while (s[i])
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			j = s[i] - '0';
			if (n >= INT_MAX / 10)
			{
				if (j > 7)
					break;
			}
			n = n * 10;
			n = n + j;
		}
		else if (s[i] == 45)
			neg++;
		else if (n > 0)
			break;
		i++;
	}
	if (neg % 2 == 0)
		return (n);
	else
		return (-n);
}
