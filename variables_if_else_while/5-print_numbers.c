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

	n = 0;
	for (i = 0; i <= 9; i++)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
