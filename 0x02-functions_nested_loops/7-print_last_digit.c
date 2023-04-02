#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - the function parameter to print its last digit
 * @a: the function parameter to find its last digit
 * Description: Write a function that prints the last digit of a number
 * Prototype: int print_last_digit(int);
 * Returns the value of the last digit
 * Return: Always 0
 */

int print_last_digit(int a)
{
	int i;
	int r = a;

	for (i = 0; i < a; i++)
	{
		if (a % 10 == i)
		{
			_putchar(i + '0');
		}
	}
	for (i = 0; i < a; ++i)
	{
		if (r % 10 == i)
		{
			_putchar('0' + r);
		}
	}
	return (0);

}
