#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - the function prototype to update a value
 * @n: the function parameter to be updated
 * Description: Write a function that takes a pointer to an int as
 * parameter and updates the value it points to to 98
 * Prototype: void reset_to_98(int *n);
 * Return: Nothing(void)
 */

void reset_to_98(int *n)
{
	*n = 98;
}
