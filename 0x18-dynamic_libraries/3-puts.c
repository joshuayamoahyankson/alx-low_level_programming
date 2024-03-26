#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - the function prototype to print the string
 * @str: the function parameter to be printed
 * Description: Write a function that prints a string,
 * followed by a new line, to stdout.
 * Prototype: void _puts(char *str);
 * Return: Nothing(void)
 */

void _puts(char *str)
{
	int s = 0;

	for (s = 0; str[s] != '\0'; ++s)
	{
		putchar(str[s] + '\0');
	}
	putchar('\n');
}
