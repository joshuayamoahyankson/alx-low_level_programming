#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps two integers
 * @a: the first integer to swap
 * @b: the secod integer to swap
 * Description: Write a function that swaps the values of two integers.
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
