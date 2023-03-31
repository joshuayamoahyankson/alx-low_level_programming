#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - the function prototype to compare two strings
 * @s1: the first function parameter to compare with
 * @s2: the second function to be compared
 * Description: Write a function that compares two strings.
 * Prototype: int _strcmp(char *s1, char *s2);
 * Your function should work exactly like strcmp
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	if (strcmp(s1, s2) < 0)
	{
		return (-15);
	}
	else if (strcmp(s1, s2) > 0)
	{
		return (15);
	}
	else
	{
		return (0);
	}
	return (0);
}
