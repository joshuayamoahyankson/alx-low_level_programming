#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - the function prototype to print program name
 * @argc: the function parameter that shows number of arguments
 * @argv: the function parameter that the arguments passed
 * Description: Write a program that prints its name, followed by a new line
 * If you rename the program, it will print the new name,
 * without having to compile it again
 * You should not remove the path before the name of the program
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", *argv);

	return (0);
}
