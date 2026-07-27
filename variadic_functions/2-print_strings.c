#include "variadic_functions.h"
/**
 * print_strings - prints string followed by a new line
 * @separator: what should separate each string
 * @n: amount of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	i = 0;
	va_start(ap, n);
	while (i < n)
	{
		i++;
		str = va_arg(ap, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);

		}
		if (i == n)
		{
			break;
		}
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
