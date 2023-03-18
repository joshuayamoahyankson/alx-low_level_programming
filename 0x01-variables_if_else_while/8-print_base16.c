#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point to program
 * Description: Write a program that prints all the
 * numbers of base 16 in lowercase,
 * followed by a new line.
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 * Return: Always 0
 */

int main(void)
{
	int numbers;
	int alphabet;

	for (numbers = 0; numbers < 10; ++numbers)
	{
		putchar(numbers + '0');
	}
	for (alphabet = 'a'; alphabet < 'g'; ++alphabet)
	{
		putchar(alphabet + '\0');
	}
	putchar('\n');
	return (0);
}
