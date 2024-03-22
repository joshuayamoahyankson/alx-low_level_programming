#include "stdio.h"
#include "main.h"

void print_square(int size)
{
	int row;
	int column;
	
	if (size <= 0)
	{
		putchar('\n');
	}
	for (row = 0; row < size; ++row)
	{
		for (column = 0; column < size; ++column)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
