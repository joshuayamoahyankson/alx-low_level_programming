#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point to program
 * Description: Write a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * You can only use the putchar function (every other
 * function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 * Return: Always 0
 */

int main(void)
{
	int loweralpha;
	int upperalpha;

	for (loweralpha = 'a'; loweralpha <= 'z'; loweralpha++)
	{
		putchar(loweralpha + '\0');
	}
	for (upperalpha = 'A'; upperalpha <= 'Z'; upperalpha++)
	{
		putchar(upperalpha + '\0');
	}
	putchar('\n');
	return (0);
}
