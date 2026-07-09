#include "main.h"
/**
 * times_table - prints a times table up to 9
 *
 * Return: void
 */
void times_table(void)
{
	int j = 0;
	int i = 0;
	int tens = 0;
	int ones = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
				_putchar(i * j + 48);
			else if (i * j >= 10)
			{
				tens = (((i * j) / 10) + 48);
				ones = (((i * j) % 10) + 48);
				_putchar(tens);
				_putchar(ones);
			}
			else
			{
				_putchar(' ');
				_putchar(i * j + 48);
			}
			if (j == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
