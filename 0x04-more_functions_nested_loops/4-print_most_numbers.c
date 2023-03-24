#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - the function prototype that prints the numbers
 * Description: Write a function that prints the numbers,
 * from 0 to 9, followed by a new line
 * Prototype: void print_most_numbers(void);
 * Do not print 2 and 4
 * You can only use _putchar twice in your code
 * Return: Nothing(void)
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
			_putchar(num + '0');
	}
	_putchar('\n');
}
