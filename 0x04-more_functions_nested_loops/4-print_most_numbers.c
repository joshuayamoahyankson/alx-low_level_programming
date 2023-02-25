#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints numbers except 2 and 4
 * Description: Write a function that prints the numbers, from 0 to 9
 * Do not print 2 and 4
 * Return: Always 0
 */

void print_most_numbers(void)
{
	char y;

	for (y = 0; y <= 9; y++)
	{
		if (y != 2 && y != 4)
			_putchar(y + '0');
	}
	_putchar('\n');

}
