#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncpy - the function parameter to copy a string
 * @dest: the first function parameter to copy to
 * @src: second function parameter to copy
 * @n: the third function parameter tell step
 * Description: Write a function that copies a string
 * Prototype: char *_strncpy(char *dest, char *src, int n);
 * Your function should work exactly like strncpy
 * Return: Always (0)
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
