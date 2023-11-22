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
	int i, x;
	int len_1 = strlen(s1);
	int len_2 = strlen(s2);
	int total_len = len_1 + len_2;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}

	concatenate_pointer = malloc(total_len + 1);

	if (concatenate_pointer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_1; ++i)
	{
		concatenate_pointer[i] = s1[i];
	}
	for (x = 0; x < len_2; ++x)
	{
		concatenate_pointer[len_1 + x] = s2[x];
	}
	return (concatenate_pointer);
}
