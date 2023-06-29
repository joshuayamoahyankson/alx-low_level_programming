#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - the function name whose purpose
 * it is to print anything
 * @format: the function parameter that is a
 * string of character
 * Description: Write a function that prints anything
 * Prototype: void print_all(const char * const format, ...);
 * where format is a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 * see example
 * You are not allowed to use for, goto, ternary operator, else, do ... while
 * You can use a maximum of
 * 2 while loops
 * 2 if
 * You can declare a maximum of 9 variables
 * You are allowed to use printf
 * Print a new line at the end of your function
 * Return: Alwasy 0 on success
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	const char *p = format;
	int val_int;
	int val_int_1;
	double val_float;
	char *str;
	int separator = 1;

	va_start(arg, format);

	while (*p != '\0')
	{
		if (*p == 'c')
		{
			if (!separator)
			{
				printf(", ");
			}
			val_int = va_arg(arg, int);
			printf("%c", val_int);
			separator = 0;
		}
		else if (*p == 'i')
		{
			if (!separator)
			{
				printf(", ");
			}
			val_int_1 = va_arg(arg, int);
			printf("%i", val_int_1);
			separator = 0;
		}
		else if (*p == 'f')
		{
			if (!separator)
			{
				printf(", ");
			}
			val_float = va_arg(arg, double);
			printf("%f", val_float);
			separator = 0;
		}
		else if (*p == 's')
		{
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
			}
			separator = 0;
		}
		p++;
	}
	printf("\n");
	va_end(arg);
}
