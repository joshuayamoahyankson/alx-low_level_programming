#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * string_toupper - the function prototype that changes cases
 * @*: the function parameter to change
 * Description: Write a function that changes all
 * lowercase letters of a string to uppercase
 * Prototype: char *string_toupper(char *);
 * Return: Alway o
 */

char *string_toupper(char *str)
{
	int length, i;

	length = strlen(str);
	
	for (i = 0; i < length; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (0);
}
