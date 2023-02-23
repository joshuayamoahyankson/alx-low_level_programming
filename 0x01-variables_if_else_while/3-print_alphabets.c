#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0
 */
int main(void)
{
	int lower;
	int upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);

}
