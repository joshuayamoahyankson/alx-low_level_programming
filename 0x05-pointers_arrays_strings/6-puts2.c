#include "main.h"
#include <stdio.h>
/**
 * puts2 - the function prototype to print every other character
 * @str: the character to be printed
 * Description: Write a function that prints
 * every other character of a string,
 * starting with the first character, followed by a new line
 * Return: Always 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
