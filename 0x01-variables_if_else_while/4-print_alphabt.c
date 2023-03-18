#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point to program
 * Description: Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 * Print all the letters except q and e
 * you can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: Always 0
 */

int main(void)
{
	int alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; ++alphabets)
	{
		if (alphabets != 'q' && alphabets != 'e')
		{
			putchar(alphabets + '\0');
		}
	}
	putchar('\n');
	return (0);
}
