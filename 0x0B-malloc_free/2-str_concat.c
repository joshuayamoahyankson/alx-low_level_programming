#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *str_concat - the function prototype that serves to concatenate two strings
 * @s1: the first function parameter to be concatenated to the other
 * @s2: the second function parameter the be concatenated to the first
 * Description: Write a function that concatenates two strings
 * The returned pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the
 * contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 * Return: Always 0
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenate_pointer;
	int length_1 = (strlen(s1));
	int length_2 = (strlen(s2));
	int i, x;
	int lengths = length_1 + length_2;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}

	concatenate_pointer = malloc(lengths + 1 * sizeof(char));

	if (concatenate_pointer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length_1; ++i)
	{
		concatenate_pointer[i] = s1[i];
	}
	for (x = 0; x < length_2; ++x)
	{
		concatenate_pointer[length_1 + x] = s2[x];
	}
	return (concatenate_pointer);
}
