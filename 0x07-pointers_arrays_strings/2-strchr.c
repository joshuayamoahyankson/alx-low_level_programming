#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - the function prototype to locate a character in a string
 * @s: the first function parameter
 * @c: the second function parameter
 * Description: Write a function that locates a character in a string.
 * Prototype: char *_strchr(char *s, char c);
 * Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	char *occurence;

	occurence = strchr(s, c);

	return (occurence);
}
