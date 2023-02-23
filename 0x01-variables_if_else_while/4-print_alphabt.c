#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: Print all the letters except q and e
 * Return: Always 0
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
