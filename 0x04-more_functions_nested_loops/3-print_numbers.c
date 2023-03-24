#include "main.h"
#include <stdio.h>

/**
 * print_numbers - the function prototype to print numbers
 * Description: Write a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Prototype: void print_numbers(void);
 * You can only use _putchar twice in your code
 * Return: Nothing(void)
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
}
