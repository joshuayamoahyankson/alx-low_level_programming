#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase.
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
