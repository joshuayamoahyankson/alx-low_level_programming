#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - the function prototype to print the reverse string
 * @s: the character to be printed
 * Description: Write a function that prints a string, in reverse,
 * followed by a new line.
 * Return: Always 0
 */

void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
