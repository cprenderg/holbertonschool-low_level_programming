#include <stdio.h>
/**
 * main - Base10 numbers
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
	putchar('\n');
	return (0);
}
