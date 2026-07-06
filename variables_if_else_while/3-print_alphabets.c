#include <stdio.h>
/**
 * main - Prints the alphabet in lower then upper case.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int i;

	n = 97;
	for (i = 0; i <= 25; i++)
	{
		putchar(n);
		n++;
	}
	n = 65;
	for (i = 0; i <= 25; i++)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
