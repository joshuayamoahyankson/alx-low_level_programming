#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point to program
 * Description: Write a program that prints all possible
 * combinations of single-digit numbers.
 * Numbers must be separated by ,, followed by a space
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar four times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: Always 0
 */

int main(void)
{
	int digits;

	for (digits = 0; digits < 10; digits++)
	{
		putchar(digits + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
