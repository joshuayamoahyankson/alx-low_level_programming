#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_calloc - the function prototype name that
 * allocates the memory of an array
 * @nmemb: an unsigned int first parameter
 * @size: an unsigned int second parameter
 * Description: Write a function that allocates
 * memory for an array, using malloc
 * Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
 * The _calloc function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 * Return: Nothing(void)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array_memory;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array_memory = malloc(nmemb * size);

	if (array_memory == NULL)
	{
		return (NULL);
	}
	memset(array_memory, 0, (nmemb * size));
	return (array_memory);
}
