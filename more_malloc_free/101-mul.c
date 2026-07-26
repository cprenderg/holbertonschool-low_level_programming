#include "main.h"
#include <stdio.h>
int is_num(char a);
int to_num(char *str);
/**
 * main - prints the product of two positive numbers
 * @argc: number of arguments
 * @argv: arguments passed in
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	int answer;
	int num1;
	int num2;

	if (argc == 3)
	{
		num1 = 0;
		num2 = 0;
		num1 = to_num(argv[1]);
		num2 = to_num(argv[2]);
		if (num1 == -1 || num2 == -1)
		{
			printf("Error\n");
			exit(98);
		}
		else
		{
			answer = num1 * num2;
			printf("%d\n", answer);
			return (0);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
/**
 * is_num - checks if a character is a number
 * @a: character to check
 *
 * Return: 1 if true, 0 if false
 */
int is_num(char a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * to_num - converts a string to int
 * @str: string to convert
 *
 * Return: converted integer or -1 on fail
 */
int to_num(char *str)
{
	int i;
	int new_int;

	i = 0;
	new_int = 0;
	while (str[i] != '\0')
	{
		if (is_num(str[i]))
		{
			new_int = new_int * 10;
			new_int += str[i] - '0';
			i++;
		}
		else
		{
			return (-1);
		}
	}
	return (new_int);
}
