#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *string_nconcat - the function prototype name that concatenates two strings
 * @s1: the first string parameter to add to
 * @s2: the second function parameter to add to the first
 * @n: an unsigned int parameter to tell size
 * Description: Write a function that concatenates two strings
 * Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
 * The returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * Return: Always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int length_s1 = strlen(s1);
	unsigned int length_s2 = strlen(s2);

	ptr = malloc(length_s1 + n + 1);

	if (ptr == NULL)
	{
		return ("");
	}

	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);

	strncpy((ptr + length_s1), s2, n);
	ptr[length_s1 + n] = '\0';

	if (n >= length_s2)
	{
		strcpy((ptr + length_s1), s2);
	}

	return (ptr);

}
