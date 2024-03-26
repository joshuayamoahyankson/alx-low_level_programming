#include "main.h"
#include <stdio.h>

/**
 * _isdigit - the function prototype to check for digit
 * @c: the function parameter to be checked
 * Description: Write a function that checks for a digit (0 through 9).
 * Prototype: int _isdigit(int c);
 * Returns 1 if c is a digit
 * Returns 0 otherwise
 * Return: Always 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
