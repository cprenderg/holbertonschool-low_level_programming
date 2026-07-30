#include "variadic_functions.h"
void print_type(char type, va_list ap);
/**
 * print_all - prints anything
 * @format: list of argument types passed to function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;

	i = 0;
	va_start(ap, format);
	while (format != NULL && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's')
		{
			print_type(format[i], ap);
			if (format[i + 1])
			{
				printf(", ");
			}
		}
		i++;
	}
	printf("\n");
}
/**
 * print_type - prints the variable ap of type
 * @type: character that represents the type of ap
 * @ap: variable to print
 *
 * Return: void
 */
void print_type(char type, va_list ap)
{
	char *str;

	switch (type)
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
			str = va_arg(ap, char *);
			printf("%s", str == NULL ? "(nil)" : str);
			break;
	}
}
