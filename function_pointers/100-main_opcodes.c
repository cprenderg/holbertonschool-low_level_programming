#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints n bytes of mains opcode
 * @argc: number of arguments given
 * @argv: array of pointers to arguments given
 *
 * Return: 0 on succes, 1 on fail, and 2 on negative
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (argv[1][0] == '-')
	{
		printf("Error\n");
		exit(2);
	}
	else
	{
		int bytes;
		int i;
		unsigned char *ptr;

		i = 0;
		bytes = atoi(argv[1]);
		ptr = (unsigned char *)main;
		while (i < bytes)
		{
			printf("%02x ", ptr[i]);
			i++;
		}
		printf("\n");
		return (0);
	}
}
