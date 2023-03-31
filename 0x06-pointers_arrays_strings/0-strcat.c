#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - the function prototype to be concatenated
 * @dest: the first string to concatenate to
 * @src: the second string to concatenate to first
 * Description: Write a function that concatenates two strings
 * Prototype: char *_strcat(char *dest, char *src);
 * This function appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = strcat(dest, src);

	return (ptr);
}
