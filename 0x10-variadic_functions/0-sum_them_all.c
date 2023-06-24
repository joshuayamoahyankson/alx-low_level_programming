#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - the function name that sums up all parameters received
 * @n: the first parameter that represents the number of
 * arguments that will be passed to the function call
 * @...: the number of arguments left to be passed
 * Description: Write a function that returns the sum of all its parameters
 * Prototype: int sum_them_all(const unsigned int n, ...);
 * If n == 0, return 0
 * Return: Always 0 on success
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int loop_var;
	unsigned int num_sum = 0;
	va_list num;

	if (n == 0)
	{
		return (0);
	}

	va_start(num, n);

	for (loop_var = 0; loop_var < n; ++loop_var)
	{
		num_sum += va_arg(num, const unsigned int);
	}
	va_end(num);

	return (num_sum);

}
