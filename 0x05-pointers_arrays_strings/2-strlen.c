#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - the prototype that returns the length of the string
 * @s: the string character to be returned
 * Description: Write a function that returns the length of a string.
 * Return: Always 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
