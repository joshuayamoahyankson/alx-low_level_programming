#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	char *string;
	unsigned int first_str = 0, second_str = 0, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = NULL;
	}
	while (s1[first_str] != '\0')
	{
		++first_str;
	}
	while (s2[second_str] != '\0')
	{
		++second_str;
	}
	if (n >= second_str)
	{
		n = second_str;
	}
	string = malloc(sizeof(char) * (first_str + n + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < first_str; ++i)
	{
		string[i] = s1[i];
	}
	for (i = 0; i < n; ++i)
	{
		string[first_str + i] = s2[i];
	}
	string[first_str + n] = '\0';
	return (string);
}
