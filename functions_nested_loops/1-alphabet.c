#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int n;
	int i;

	n = 97;
	for (i = 0; i < 26; i++)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
