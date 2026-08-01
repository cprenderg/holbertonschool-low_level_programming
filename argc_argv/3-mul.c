#include <stdio.h>
/**
 * main - multiplies 2 numbers
 * @argc: amount of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 if successful, 1 if not
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i;
		int num1;
		int num2;
		int ans;
		int neg;

		i = 0;
		num1 = 0;
		num2 = 0;
		neg = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == '-')
			{
				neg = 1;
				i++;
			}
			else
			{
				num1 = num1 * 10;
				num1 += argv[1][i] - '0';
				i++;
			}
		}
		if (neg)
		{
			num1 *= -1;
			neg = 0;
		}
		i = 0;
		while (argv[2][i] != '\0')
			if (argv[2][i] == '-')
			{
				neg = 1;
				i++;
			}
			else
			{
				num2 = num2 * 10;
				num2 += argv[2][i] - '0';
				i++;
			}
		if (neg)
		{
			num1 *= -1;
		}
		ans = num1 * num2;
		printf("%d\n", ans);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
