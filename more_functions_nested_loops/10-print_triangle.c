#include "main.h"
/**
 * print_triangle - prints a triangle of size size
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1;
	int j = 0;
	int k = 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i <= size)
		{
			j = 0;
			k = 0;
			while (i + j < size)
			{
				_putchar(' ');
				j++;
			}
			while (k < size - j)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
}
