#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
/**
 * check_prime - checks if a number is prime
 * @n: number to check
 * @i: deviser to check
 *
 * Return: 1 if n cannot be divided by i, and 0 if it can
 */
int check_prime(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i != 0)
		return (check_prime(n, i + 1));
	else
		return (0);
}
