#include "variadic_functions.h"
/**
 * print_numbers - prints all n separated by separator
 * @separator: characters to separate numbers with
 * @n: amount numbers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	i = 0;
	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		printf("%s", separator);
		i++;
	}
	printf("\n");
}
