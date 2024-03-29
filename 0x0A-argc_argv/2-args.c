#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - the function that prints all arguments it receives
 * @argc: the function paramter that shows the number of arguments passed
 * @argv: the function parameter that shows the arguments passed
 * Description: Write a program that prints all arguments it receives
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int print_arguments;

	for (print_arguments = 0; print_arguments < argc; ++print_arguments)
	{
		printf("%s\n", argv[print_arguments]);
	}
	return (0);
}

