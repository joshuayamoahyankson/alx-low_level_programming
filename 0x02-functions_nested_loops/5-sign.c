#include "main.h"
#include <stdio.h>

/**
 * print_sign - function prototype to print sign
 * @n: the function parameter to test for
 * Description: Write a function that prints the sign of a number.
 * Return: alway 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+' + '\0');
		return (1);
	}
	if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-' + '\0');
		return (-1);
	}
	return (0);
}

