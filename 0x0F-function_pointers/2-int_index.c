#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - the function prototype that searches for an integer
 * @array: a function parameter that is an array of type int
 * @size: a function parameter of type int
 * @cmp: a function pointer to the function prototype
 * Description: Write a function that searches for an integer
 * Prototype: int int_index(int *array, int size, int (*cmp)(int));
 * where size is the number of elements in the array array
 * cmp is a pointer to the function to be used to compare values
 * int_index returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 * Return: Always 0 on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
