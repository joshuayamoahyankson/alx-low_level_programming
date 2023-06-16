#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - the function prototype that allocates the memory
 * @b: a function parameter as unsigned int
 * Description: Write a function that allocates memory using malloc
 * Prototype: void *malloc_checked(unsigned int b);
 * Returns a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause
 * process termination with a status value of 98
 * Return: Nothing(void)
 */

void *malloc_checked(unsigned int b)
{
	void *allocated_space = malloc(b);

	if (allocated_space == NULL)
	{
		exit(98);
	}
	return (allocated_space);
}
