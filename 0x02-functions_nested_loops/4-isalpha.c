#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character to test
 * Return: 1 if lower/upper case, otherwise 0
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
