#include "main.h"
/**
 * _puts - prints string str followed by a new line
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	putchar('\n');
}
