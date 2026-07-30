#include <stdio.h>
/**
 * main - prints the program's name
 * @argc: amount of arguments
 * @argv: array of pointers to arguments
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	return (0);
}
