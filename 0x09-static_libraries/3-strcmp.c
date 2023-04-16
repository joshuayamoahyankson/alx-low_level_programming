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
	int x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
																		return (s1[x] - s2[x]);
																	}
	x++;
	}
	return (0);
}
