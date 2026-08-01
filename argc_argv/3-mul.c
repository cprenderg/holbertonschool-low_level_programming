#include <stdio.h>
int string_to_num(char *str);
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
		int num1;
		int num2;
		int ans;

		num1 = string_to_num(argv[1]);
		num2 = string_to_num(argv[2]);
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
/**
 * string_to_num - converts string to a integer
 * @str: string to convert
 *
 * Return: integer converted from string
 */
int string_to_num(char *str)
{
	int i;
	int neg;
	int num;

	i = 0;
	neg = 0;
	num = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			neg = 1;
			i++;
		}
		else
		{
			num = num * 10;
			num += str[i] - '0';
			i++;
		}
	}
	if (neg)
	{
		num *= -1;
	}
	return (num);
}
