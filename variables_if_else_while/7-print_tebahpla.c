#include <stdio.h>
/**
 * main - Prints the alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int i;

	n = 122;
	for (i = 0; i <= 25; i++)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
