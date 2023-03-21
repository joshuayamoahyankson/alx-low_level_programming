#include <stdio.h>

/**
 * main - Entry point to program
 * Description: Write a C program that prints exactly
 * and that piece of art is useful
 * " - Dora Korpar, 2015-10-19, followed by a new line,
 * to the standard error.
 * You are not allowed to use any functions listed in the
 * NAME section of the man (3) printf or man (3) puts
 * Your program should return 1
 * Your program should compile without
 * any warnings when using the -Wall gcc option
 * Return: Always 1
 */

int main(void)
{
	fprintf(stderr, "and that piece of art is useful\""
		       "- Dora Korpar, 2015-10-19\n");
		return (1);
}
