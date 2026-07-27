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
		
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		answer = get_op_func(argv[2])(a, b);
		printf("%d\n", answer);
		return (0);
	}
	else
		return (0);
}
