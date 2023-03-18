#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point to program
 * Description: Write a program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 * All your code should be in the main function
 * Return: Always 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; ++number)
	{
		printf("%d", number);
	}
	putchar('\n');
	return (0);
}
