#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

/**
 * main - Checks the last digit of a random number.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int last_digit_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit_n = n % 10;
	if (last_digit_n == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (last_digit_n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit_n);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit_n);
	return (0);
}
