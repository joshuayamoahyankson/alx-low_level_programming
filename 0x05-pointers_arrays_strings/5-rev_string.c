#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - the function prototype to print the reverse string
 * @s: the character to be printed
 * Description: Write a function that prints a string, in reverse,
 * followed by a new line.
 * Return: Always 0
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int midlen = length / 2;
	int x;
	int i;

	for (i = 0; i < midlen; i++)
	{
		x = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = x;
	}
}
