#include "main.h"
#include <stdio.h>
/**
 * print_array - the protype function that
 * prints the arrays of integers
 * @a: a parameter variable
 * @n: number of elements of the array to be printed
 * Description: Write a function that prints
 * n elements of an array of integers,
 * followed by a new line.
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int length = 5;

	for (n = 0; n < length; n++)
	{
		printf("%d", a[n]);
		if (n != (length - 1))
			printf(", ");
	}
	printf("\n");
}
