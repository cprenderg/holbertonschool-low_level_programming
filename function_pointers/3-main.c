#include "3-calc.h"
/**
 * main - calculator
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 if worked successfully
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int b;
		int a;
		int answer;
		
		if (*argv[2] != '+' && *argv[2] != '-' &&
				*argv[2] != '*' && *argv[2] != '/' && *argv[2] != '%')
		{
			printf("Error\n");
			return (99);
		}
		if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == 0)
		{
			printf("Error\n");
			return (100);
		}
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		answer = get_op_func(argv[2])(a, b);
		printf("%d\n", answer);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (98);
	}
}
