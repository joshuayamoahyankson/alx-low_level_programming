#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - the function prototype that prints a string
 * @s: the function parameter to be printed
 * Description: Write a function that prints a string in reverse
 * Prototype: void _print_rev_recursion(char *s);
 * Return: Nothing(void)
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
