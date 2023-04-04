#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - the function prototype to fill the memory
 * @s: the first function parameter
 * @b: the second function parameter
 * @n: the third function parameter
 * Description: Write a function that fills memory with a constant byte.
 * Prototype: char *_memset(char *s, char b, unsigned int n);
 * The _memset() function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * Returns a pointer to the memory area s
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
