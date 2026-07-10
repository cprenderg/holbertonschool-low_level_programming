#include <stdio.h>
void fizz_buzz(void);
/**
 * main - Calls fizz_buzz
 *
 * Return: Always 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
/**
 * fizz_buzz - Prints 1 - 100, multiples of 3 as Fizz, 5 as Buzz
 *
 * Return: void
 */
void fizz_buzz(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz\n");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", i);
		i++;
	}
}
