#include "main.h"
#include <stdio.h>

/**
 * swap_int - the function prototype to swap int
 * @a: the first function parameter to swap
 * @b: the second function parameter to swap
 * Description: Write a function that swaps the values of two integers.
 * Prototype: void swap_int(int *a, int *b);
 * Return: Nothing(void)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
