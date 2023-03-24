#include "main.h"
#include <stdio.h>

/**
 * _isupper - the function prototype to check for uppercase
 * @c: the function parameter to be checked
 * Description: Write a function that checks for uppercase character.
 * Prototype: int _isupper(int c);
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 * Return: Always 0
 */

int _isupper(int c)
{

		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
