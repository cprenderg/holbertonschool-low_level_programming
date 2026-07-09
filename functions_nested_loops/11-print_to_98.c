#include "main.h"
/**
 * print_to_98 - Prints all integers from n to 98, followed by a new line
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("%d\n", n);
}
