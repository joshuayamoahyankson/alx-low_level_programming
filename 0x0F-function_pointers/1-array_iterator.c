#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - the function name that iterates through
 * an array of integers
 * @array: the array to be iterated through
 * @size: the array size allocated dynamically
 * @action: the function pointer that takes an int parameter
 * and returns void
 * Description: Write a function that executes a function given
 * as a parameter on each element of an array
 * Prototype: void array_iterator(int *array, size_t size,
 * void (*action)(int));
 * where size is the size of the array
 * and action is a pointer to the function you need to use
 * Return: Always 0 on success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
