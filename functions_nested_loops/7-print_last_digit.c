#include "main.h"
/**
 * print_last_digit - returns the last digit of n
 * @n: integer to retrieve the last digit from
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	if (n % 10 < 0)
	{
		_putchar((-(n % 10) + 48));
		return (-(n % 10));
	}
	else
	{
		_putchar(n % 10 + 48);
		return (n % 10);
	}
}
