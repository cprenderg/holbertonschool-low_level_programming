#include <stdio.h>
/**
 * main - betty stuff
 *
 * Return: always 0
 */
int main()
{
	char user_input[11];
	int user_input_len;
	int valid;
	int function;
	int num1;
	int num2;
	float answer;

	printf("Simple Calculator\n");
	while (1)
	{
		printf("Type one of the following characters to choose an operation:\n");
		printf("'1' to add\n");
		printf("'2' to subtract\n");
		printf("'3' to multiply\n");
		printf("'4' to divide\n");
		printf("'0' to quit\n");
		scanf("%10s", user_input);
		
		user_input_len = 0;

		while (user_input[user_input_len] != '\0')
			user_input_len++;
		if (user_input_len == 1)
		{
			if (user_input[0] >= '0' && user_input[0] <= '4')
			{
				function = user_input[0] - '0';
				break;
			}
			else
				printf("Invalid choice\n");
		}
		else
			printf("Invalid choice\n");
	}

	num1 = 0;
	num2 = 0;
	valid = 1;
	if (function == 0)
		printf("Bye!\n");
	if (function == 1)
	{
		while (1)
		{
			printf("Please choose your first number:\n");
			scanf("%10s", user_input);
			user_input_len = 0;
			num1 = 0;
			valid = 1;
			while (user_input[user_input_len] != '\0')
			{
				if (user_input[user_input_len] >= '0' && user_input[user_input_len] <= '9')
				{
					num1 = num1 * 10;
					num1 += user_input[user_input_len] - '0';
				}
				else
				{
					printf("Invalid choice\n");
					valid = 0;
					break;
				}
				user_input_len++;
			}
			if (valid == 1)
				break;
		}
		while (1)
		{
			printf("Please choose your second number:\n");
			scanf("%10s", user_input);
			user_input_len = 0;
			num2 = 0;
			valid = 1;
			while (user_input[user_input_len] != '\0')
			{
				if (user_input[user_input_len] >= '0' && user_input[user_input_len] <= '9')
				{
					num2 = num2 * 10;
					num2 += user_input[user_input_len] - '0';
				}
				else
				{
					printf("Invalid choice\n");
					valid = 0;
					break;
				}
				user_input_len++;
			}
			if (valid == 1)
				break;
		}
		answer = num1 + num2;
		printf("Result: %.0f\n", answer);
	}
	else if (function == 2)
	{
		while (1)
		{
			printf("Please choose your first number:\n");
			scanf("%10s", user_input);
			user_input_len = 0;
			num1 = 0;
			valid = 1;
			while (user_input[user_input_len] != '\0')
			{
				if (user_input[user_input_len] >= '0' && user_input[user_input_len] <= '9')
				{
					num1 = num1 * 10;
					num1 += user_input[user_input_len] - '0';
				}
				else
				{
					printf("Invalid choice\n");
					valid = 0;
					break;
				}
				user_input_len++;
			}
			if (valid == 1)
				break;
		}
		while (1)
		{
			printf("Please choose your second number:\n");
			scanf("%10s", user_input);
			user_input_len = 0;
			num2 = 0;
			valid = 1;
			while (user_input[user_input_len] != '\0')
			{
				if (user_input[user_input_len] >= '0' && user_input[user_input_len] <= '9')
				{
					num2 = num2 * 10;
					num2 += user_input[user_input_len] - '0';
				}
				else
				{
					printf("Invalid choice\n");
					valid = 0;
					break;
				}
				user_input_len++;
			}
			if (valid == 1)
				break;
		}
		answer = num1 - num2;
		printf("Result: %.0f\n", answer);
	}
	else if (function == 3)
	
	{
		while (1)
		{
			printf("Please choose your first number:\n");
			scanf("%10s", user_input);
			user_input_len = 0;
			num1 = 0;
			valid = 1;
			while (user_input[user_input_len] != '\0')
			{
				if (user_input[user_input_len] >= '0' && user_input[user_input_len] <= '9')
				{
					num1 = num1 * 10;
					num1 += user_input[user_input_len] - '0';
				}
				else
				{
					printf("Invalid choice\n");
					valid = 0;
					break;
				}
				user_input_len++;
			}
			if (valid == 1)
				break;
		}
		while (1)
		{
			printf("Please choose your second number:\n");
			scanf("%10s", user_input);
			user_input_len = 0;
			num2 = 0;
			valid = 1;
			while (user_input[user_input_len] != '\0')
			{
				if (user_input[user_input_len] >= '0' && user_input[user_input_len] <= '9')
				{
					num2 = num2 * 10;
					num2 += user_input[user_input_len] - '0';
				}
				else
				{
					printf("Invalid choice\n");
					valid = 0;
					break;
				}
				user_input_len++;
			}
			if (valid == 1)
				break;
		}
		answer = num1 * num2;
		printf("Result: %.0f\n", answer);
	}
	else if (function == 4)
	{
		while (1)
		{
			printf("Please choose your first number:\n");
			scanf("%10s", user_input);
			user_input_len = 0;
			num1 = 0;
			valid = 1;
			while (user_input[user_input_len] != '\0')
			{
				if (user_input[user_input_len] >= '0' && user_input[user_input_len] <= '9')
				{
					num1 = num1 * 10;
					num1 += user_input[user_input_len] - '0';
				}
				else
				{
					printf("Invalid choice\n");
					valid = 0;
					break;
				}
				user_input_len++;
			}
			if (valid == 1)
				break;
		}
		while (1)
		{
			printf("Please choose your second number:\n");
			scanf("%10s", user_input);
			user_input_len = 0;
			num2 = 0;
			valid = 1;
			while (user_input[user_input_len] != '\0')
			{
				if (user_input[user_input_len] >= '0' && user_input[user_input_len] <= '9')
				{
					num2 = num2 * 10;
					num2 += user_input[user_input_len] - '0';
				}
				else
				{
					printf("Invalid choice\n");
					valid = 0;
					break;
				}
				user_input_len++;
			}
			if (num2 == 0)
				valid = 0;
			if (valid == 1)
				break;
		}
		answer = (float)num1 / num2;
		printf("Result: %.1f\n", answer);
	}
	return (0);
}
