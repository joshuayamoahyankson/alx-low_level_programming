#include <stdio.h>
#include "main.h"

/**
 * _puts - the function prototype to print the string
 * @str: the character to be printed out
 * Description: Write a function that prints a string,
 * followed by a new line, to stdout
 * Return: Always 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

