#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * *_strdup - the function prototype that returns a pointer to
 * a newly allocated space in memory containing a copy of the string
 * @str: the function parameter that is a string
 * Description: Write a function that returns a pointer
 * to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * Prototype: char *_strdup(char *str);
 * The _strdup() function returns a pointer to a new string
 * which is a duplicate of the string str
 * Memory for the new string is obtained with malloc, and can be freed with free
 * Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string
 * It returns NULL if insufficient memory was available
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *new_string;

	new_string = strdup(str);
	new_string = malloc(sizeof(str));
	
	if (str == NULL)
	{
		return NULL;
	}
	_putchar(new_string);
	return (new_string);
}
