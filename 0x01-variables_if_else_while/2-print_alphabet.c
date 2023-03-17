#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of program
 * Description: Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: Always 0
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha + '\0');
	}
	putchar('\n');
	return (0);
}
