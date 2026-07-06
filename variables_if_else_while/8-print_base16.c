#include <stdio.h>
/**
 * main - Prints base16 characters
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int i;

	n = 48;
	for (i = 0; i <= 9; i++)
	{
		putchar(n);
		n++;
	}
	n = 97;
	for (i = 0; i <= 5; i++)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
