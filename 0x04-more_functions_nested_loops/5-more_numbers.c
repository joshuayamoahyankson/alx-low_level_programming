#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * more_numbers - the fuunction prototype to print more numbers
 * Description: Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a newline.
 * Prototype: void more_numbers(void);
 * You can only use _putchar three times in your code
 * Return: Nothing (void)
 */

void more_numbers(void)
{
	int number;
	int looping;

	for (looping = 0; looping <= 9; ++looping)
	{
		for (number = 0; number < 15; ++number)
		{
			if (number > 9)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
