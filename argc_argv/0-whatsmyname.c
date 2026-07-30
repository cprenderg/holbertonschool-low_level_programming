#include <stdio.h>
/*
 * program_name - prints the program's name
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
		return (1);
	}
	return (0);
}
