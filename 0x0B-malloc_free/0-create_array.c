#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *create_array - the function prototype that creates an array of chars
 * @size: a function parameter declared as unsigned int
 * @c: a second function parameter of typr char
 * Description: Write a function that creates an array of chars,
 * and initializes it with a specific char
 * Prototype: char *create_array(unsigned int size, char c);
 * Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *my_array;

	if (size == 0)
	{
		return (NULL);
	}

	my_array = malloc(size * sizeof(char));

	for (i = 0; i < size; ++i)
	{
		my_array[i] = c;
	}
	return (my_array);

}
