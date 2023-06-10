#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - the function parameter that prints the number
 * of arguments passed into it
 * @argc: the function parameter that shows number of arguments
 * @argv: the function parameter that shows the arguments passed
 * Description: Write a program that prints the number
 * of arguments passed into it
 * Your program should print a number, followed by a new line
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	(void) **argv;
	
	printf("%d\n", argc - 1);

	return(0);
}
