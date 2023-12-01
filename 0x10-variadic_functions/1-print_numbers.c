#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - the function name that prints numbers
 * @separator: the symbol/sign that separates the numbers to
 * be printed
 * @n: the number of parameters that would be passed to the
 * passed to the function call
 * Description: Write a function that prints numbers, followed by a new line
 * Prototype: void print_numbers(const char *separator,
 * const unsigned int n, ...);
 * where separator is the string to be printed between numbers
 * and n is the number of integers passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * Print a new line at the end of your function
 * Return: Always 0 on success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int loop_var;
	int print_num;
	va_list number;

	va_start(number, n);

	for (loop_var = 0; loop_var < n; ++loop_var)
	{
		print_num = va_arg(number, unsigned int);
		printf("%d", print_num);

		if (separator != NULL && loop_var != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(number);
	printf("\n");
}
