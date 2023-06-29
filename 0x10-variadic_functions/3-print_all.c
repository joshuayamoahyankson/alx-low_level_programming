#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - the function name whose purpose
 * it is to print anything
 * @format: the function parameter that is a
 * string of character
 * Return: Alwasy 0 on success
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	const char *p = format;
	char *str;
	int separator = 1;

	va_start(arg, format);
	while (*p != '\0')
	{
		switch (*p)
		{
			case 'c':
			if (!separator)
			{
				printf(", ");
			}
			printf("%c", va_arg(arg, int));
			separator = 0;
			break;
			case 'i':
			if (!separator)
			{
				printf(", ");
			}
			printf("%i", va_arg(arg, int));
			separator = 0;
			break;
			case 'f':
			if (!separator)
			{
				printf(", ");
			}
			printf("%f", va_arg(arg, double));
			separator = 0;
			break;
			case 's':
			str = va_arg(arg, char *);
			if (!separator)
			{
				printf(", ");
			}
			if (str == NULL)
			{
				printf("nil");
			}
			else
			{
				printf("%s", str);
				separator = 0;
			}
			break;
		}
		p++;
	}
	va_end(arg);
	printf("\n");
}
