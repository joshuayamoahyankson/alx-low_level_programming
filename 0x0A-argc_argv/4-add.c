#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - the Entry point to the program
 * @argc: the parameter that counts the number of command-line arguments
 * @argv: the arguments passed at command-line
 * Description: Write a program that adds positive numbers
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 * You can assume that numbers and the addition
 * of all the numbers can be stored in an int
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i;
	int x;
	int sum;

	if (argc < 0)
	{
		printf("%d\n", 0);
	}

	sum = 0;
	for (i = 1; i < argc; ++i)
	{
		for (x = 0; argv[i][x] != '\0'; ++x)
		{
			if (!isdigit(argv[i][x]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);

}
