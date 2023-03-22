#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - The function prototype to print
 * the alphabets 10 times.
 * Description: Write a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Prototype: void print_alphabet_x10(void);
 * You can only use _putchar twice in your code.
 * Return: Alway 0
 */

void print_alphabet_x10(void)
{
	int print_alpha;
	int number;

	for (number = 0; number < 10; ++number)
	{
		for (print_alpha = 'a'; print_alpha <= 'z'; ++print_alpha)
			_putchar(print_alpha);
		_putchar('\n');
	}
}
