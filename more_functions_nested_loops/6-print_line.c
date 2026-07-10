#include "main.h"
/**
 * print_line - prints a line that is n long
 * @n: length of line
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
