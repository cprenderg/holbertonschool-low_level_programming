#include <stdio.h>
/**
 * main - betty stuff
 *
 * Return: always 0
 */
int main()
{
	int function;
	int num1;
	int num2;
	int answer;

	printf("Simple Calculator\n");

	while (1)
	{
		printf("Type one of the following characters to choose an operation:\n");
		printf("'1' to add\n");
		printf("'2' to subtract\n");
		printf("'3' to multiply\n");
		printf("'4' to divide\n");
		printf("'0' to quit\n");
		scanf("%d", &function);
		printf("You have selected %d\n", function);
		if (function >= 0 && function <= 4)
			break;
		else
			printf("Invalid choice\n");
	}

	if (function == 1)
	{
		printf("Please choose your first number:\n");
		scanf("%d", &num1);
		printf("Please choose your second number:\n");
		scanf("%d", &num2);
		answer = num1 + num2;
		printf("Result: %d\n", answer);
	}

	return (0);
}
