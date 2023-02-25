#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 * @c: the character to test
 * Description: Write a function that checks for uppercase character
 * Return: 1 if uppercase, otherwise 0
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
