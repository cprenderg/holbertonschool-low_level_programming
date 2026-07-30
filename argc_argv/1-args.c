#include <stdio.h>
/**
 * main - prints the amount of arguments passed into program
 * @argc: amount of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
