#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *array_range - the function prototype name that creates an
 * array of integers
 * @min: the minimum value as function parameter
 * @max: the maximum value as function parameter
 * Description: Write a function that creates an array of integers
 * Prototype: int *array_range(int min, int max);
 * The array created should contain all the values from min (included)
 * to max (included), ordered from min to max
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int loop_var;
	int range = (max - min + 1);
	int *int_array = malloc(range * sizeof(int));

	if (min > max)
	{
		return (NULL);
	}
	if (int_array == NULL)
	{
		return (NULL);
	}

	for (loop_var = 0; loop_var < range; ++loop_var)
	{
		int_array[loop_var] = min++;
	}
	return (int_array);
}
