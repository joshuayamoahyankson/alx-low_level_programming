#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks if a given number is lower
 * @c: character to test
 * _islower - the function prototype to check if lower
 * @c: the parameter to be checked
 * Description: Write a function that checks for lowercase character.
 * Prototype: int _islower(int c);
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 * Return: Always 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
