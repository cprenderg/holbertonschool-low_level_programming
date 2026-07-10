#include "main.h"
/**
 * print_square - prints a square, where size is the size of the square
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	else
		_putchar('\n');
}
