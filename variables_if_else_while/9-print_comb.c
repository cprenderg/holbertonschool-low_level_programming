#include <stdio.h>
/**
 * main - Prints Base 10 numbers seperated by a comma and space
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
		if (n != 57)
		{
			putchar(44);
			putchar(32);
			n++;
		}
		else
			putchar('\n');
	}
	return (0);
}
