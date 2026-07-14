#include "main.h"
/**
 * puts_half - prints the last half of a string rounded up
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	len = (len / 2);
	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
