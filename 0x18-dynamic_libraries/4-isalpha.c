#include <stdio.h>
#include "main.h"

/**
 * _isalpha - the function prototype to check if alphabet
 * @c: the function parameter to be checked
 * Description: Write a function that checks for alphabetic character
 * Prototype: int _isalpha(int c);
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
