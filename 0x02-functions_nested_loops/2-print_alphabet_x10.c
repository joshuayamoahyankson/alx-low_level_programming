#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_alphabet_x10 - Make the alphabet
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int alpha;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
