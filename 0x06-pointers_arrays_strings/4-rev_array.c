#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - the function prototype to be reversed
 * @a: the first function parameter of an array of integers
 * @n: the second function parameter of the number of elements to swap
 * Description: Write a function that reverses
 * the content of an array of integers
 * Prototype: void reverse_array(int *a, int n);
 * Where n is the number of elements of the array
 * Return: Nothing(void)
 */

void reverse_array(int *a, int n)
{
	int x = 0;

	int i = 0;

	for (i = 0; i < (n / 2); i++)
	{
		x = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = x;
	}
}
