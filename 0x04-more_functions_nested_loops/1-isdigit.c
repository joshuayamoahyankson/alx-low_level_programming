#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isdigit - check for a digit
 * @c: the digit to check
 * Description: Write a function that checks for a digit (0 through 9)
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
