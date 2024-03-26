#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * * _strncat - the function prototype to concatenate
 * @dest: the first function parameter to concatenate to
 * @src: the second function parameter to concatenate to first
 * @n: a third parameter to tell number of characters to copy
 * Description: Write a function that concatenates two strings
 * Prototype: char *_strncat(char *dest, char *src, int n);
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * Return a pointer to the resulting string dest
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = strncat(dest, src, n);

	return (ptr);
}
