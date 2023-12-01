#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - the function name whose purpose it
 * is to print strings
 * @separator: the symbol/sign that separates the numbers to
 * be printed
 * @n: the number of parameters that would be passed to the
 * passed to the function call
 * Description: Write a function that prints strings,
 * followed by a new line
 * Prototype: void print_strings(const char *separator,
 * const unsigned int n, ...);
 * where separator is the string to be printed between the strings
 * and n is the number of strings passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 * Return: Always 0 on success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int loop_var;
	const char *string_arg;
	va_list print_str;

	va_start(print_str, n);

	for (loop_var = 0; loop_var < n; ++loop_var)
	{
		string_arg = va_arg(print_str, const char *);
		{
			if (string_arg == NULL)
			{
				printf("nil");
			}
			else
			{
				printf("%s", string_arg);
			}
		}
		{
			if (separator != NULL && loop_var != n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(print_str);
	printf("\n");
}
