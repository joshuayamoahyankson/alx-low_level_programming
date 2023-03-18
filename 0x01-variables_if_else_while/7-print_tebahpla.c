#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point to program
 * Description: Write a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: Always 0
 */

int main(void)
{
	int reversealpha;

	for (reversealpha = 'z'; reversealpha >= 'a'; reversealpha--)
	{
		putchar(reversealpha + '\0');
	}
	putchar('\n');
	return (0);
}
