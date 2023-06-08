#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts_recursion - the function prototype that prints a string
 * @s: the function parameter to be printed
 * Description: Write a function that prints a string,
 * followed by a new line.
 * Prototype: void _puts_recursion(char *s);
 * Return: Nothing(void)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
