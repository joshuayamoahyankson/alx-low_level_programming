#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - the function prototype to return the string length
 * @s: the function parameter to be returned
 * Description: Write a function that returns the length of a string
 * Prototype: int _strlen_recursion(char *s);
 * Return: Always 1
 */

int _strlen_recursion(char *s)
{
	*s = strlen(s);

	if (*s != '\0')
	{
		_strlen_recursion(s);
		_putchar(*s);
	}
	return (0);
}


