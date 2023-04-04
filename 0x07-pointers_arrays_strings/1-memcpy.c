#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memcpy - the function prototype to copy memory area
 * @dest: the first function parameter
 * @src: the second function parameter
 * @n: the third function parameter
 * Description: Write a function that copies memory area
 * Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
 * The _memcpy() function copies n bytes from
 * memory area src to memory area dest
 * Returns a pointer to dest
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
