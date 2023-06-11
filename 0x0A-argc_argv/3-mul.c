#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - the function definition that multiplies two number
 * @argc: the function parameter that shows how many arguments are passed
 * @argv: the function parameter tha shows the arguments passed
 * Description: Write a program that multiplies two numbers
 * Your program should print the result of the multiplication,
 * followed by a new line
 * You can assume that the two numbers and result of
 * the multiplication can be stored in an integer
 * If the program does not receive two arguments,
 * your program should print Error
 * followed by a new line, and return 1
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int number_1;
	int number_2;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	number_1 = atoi(argv[1]);
	number_2 = atoi(argv[2]);
	product = (number_1 * number_2);

	printf("%d\n", product);
	return (product);
}
