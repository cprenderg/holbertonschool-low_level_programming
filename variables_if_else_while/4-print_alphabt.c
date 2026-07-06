#include <stdio.h>
/**
 * main - Prints the alphabet without q and e
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
		if (n == 101 || n == 113)
			n++;
		else
		{
			putchar(n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}
