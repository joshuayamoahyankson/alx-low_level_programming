#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcpy - the function prototype that copies from one string to another
 * @dest: the function parameter that serves as the destination(copied to)
 * @src: the function parameter that is copied and added to dest
 * Description: Write a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * Prototype: char *_strcpy(char *dest, char *src);
 * Return value: the pointer to dest
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
