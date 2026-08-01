#include <stdio.h>
int string_to_num(char *str);
/**
 * main - adds all positive arguments
 * @argc: amount of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 if successful, 1 if not
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	if (argc > 1)
	{
		int num;
		int ans;
		int i;

		i = 1;
		num = 0;
		ans = 0;
		while (i < argc)
		{
			if (string_to_num(argv[i]) >= 0)
			{
				num = string_to_num(argv[i]);
				ans += num;
				i++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
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
 * Return: integer converted from string, or -1 if not integer
 */
int string_to_num(char *str)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10;
			num += str[i] - '0';
			i++;
		}
		else
		{
			return (-1);
		}
	}
	return (num);
}
