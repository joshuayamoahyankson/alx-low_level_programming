#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_chessboard - the function prototype that prints chessboard
 * @a: the function parameter to be printed
 * Description: Write a function that prints the chessboard.
 * Prototype: void print_chessboard(char (*a)[8]);
 * Return: Nothing(void)
 */

void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < (*a[8]); ++i)
	{
		_putchar(i + '\0');
	}
	_putchar('\n');
}
