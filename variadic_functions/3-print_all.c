#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of argument types passed to function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *type;
	int i;
	int len;
	int valid;

	len = 0;
	i = 0;
	type = format;
	while (type[len] != '\0')
		len++;
	va_start(ap, format);
	while (i < len)
	{
		valid = 1;
		switch (type[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				printf("%s", va_arg(ap, char *));
				break;
			default:
				valid = 0;
				break;
		}
		i++;
		if (i == len)
			break;
		if (valid)
			printf(", ");
	}
	printf("\n");
}
