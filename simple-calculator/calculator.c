#include <stdio.h>
/**
 * main - betty stuff
 *
 * Return: always 0
 */
int main()
{
	char function;
	int num1;
	int num2;
	int answer;

	printf("Simple Calculator\n");
	printf("Type one of the following characters to choose an operation:\n");
	printf("'+' to add\n");
	printf("'-' to subtract\n");
	printf("'*' to multiply\n");
	printf("'/' to divide\n");
	printf("'0' to quit\n");
	scanf(" %c", &function);

	printf("You have selected %c\n", function);
	
	while (function != 0)
	{
		if (function == '0')
		{
			printf("Goodbye!\n");
			return (0);
		}
		else
		{
			printf("Please enter your first number:\n");
			scanf("%d", &num1);
			printf("You have entered %d\n", num1);
			printf("Please enter your second number:\n");
			scanf("%d", &num2);
			printf("You have entered %d\n", num2);
		}
		if (function == '+')
			answer = num1 + num2;
		else if (function == '-')
			answer = num1 - num2;
		else if (function == '*')
			answer = num1 * num2;
		else
			answer = num1 / num2;
		printf("%d %c %d = %d\n", num1, function, num2, answer);

		printf("Would you like to do another calculation?\n");
		printf("Type one of the following characters to choose an operation:\n");
		printf("'+' to add\n");
		printf("'-' to subtract\n");
		printf("'*' to multiply\n");
		printf("'/' to divide\n");
		printf("'0' to quit\n");
		scanf(" %c", &function);
		printf("You have selected %c\n", function);
	}
	printf("Goodbye!\n");
	return (0);
}
