#include <stdio.h>
/**
 * main - Entry point
 * Description:  prints the lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; --alpha)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
