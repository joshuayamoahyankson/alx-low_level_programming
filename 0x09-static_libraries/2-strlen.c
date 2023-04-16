#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - the function prototype that returns a strings
 * @s: the function parameter to return its string
 * Description: Write a function that returns the length of a string.
 * Prototype: int _strlen(char *s);
 * Return: Alway 0
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
