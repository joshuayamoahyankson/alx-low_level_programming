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
	char *string_concat;
	int length_s1 = strlen(s1);
	unsigned int length_s2 = strlen(s2);

	string_concat = malloc(length_s1 + n + 1);

	if (string_concat == NULL)
	{
		return ("");
	}

	if (string_concat == NULL)
	{
		return (NULL);
	}
	strcpy(string_concat, s1);

	strncpy((string_concat + length_s1), s2, n);
	string_concat[length_s1 + n] = '\0';

	if (n >= length_s2)
	{
		strcpy((string_concat + length_s1), s2);
	}

	return (string_concat);

}
