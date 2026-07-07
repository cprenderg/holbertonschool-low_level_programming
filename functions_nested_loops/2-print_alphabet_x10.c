#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet ten times in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c;
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		c = 97;
		for (j = 0; j < 26; j++)
		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
	}
}
