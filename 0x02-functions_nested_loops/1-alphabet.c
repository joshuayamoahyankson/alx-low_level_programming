#include "main.h"
#include <stdio.h>

/**
 * print_alphabet -  the function prototype to print the alphabet
 * Description: Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 * Return: Alway 0
 */

void print_alphabet(void)
{
	int lower_alphabet;

	for (lower_alphabet = 'a'; lower_alphabet <= 'z'; ++lower_alphabet)
	{
		_putchar(lower_alphabet + '\0');
	}
	_putchar('\n');
}
