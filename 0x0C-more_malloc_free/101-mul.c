#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program entry point that multiplies arguments at Command-line
 * @argc: first function parameter that counts arguments
 * @argv: second function parameter of arguments passed at command-line
 * Description: Write a program that multiplies two positive numbers
 * Usage: mul num1 num2
 * num1 and num2 will be passed in base 10
 * Print the result, followed by a new line
 * if the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits. If not, print Error
 * followed by a new line, and exit with a status of 98
 * You are allowed to use more than 5 functions in your file
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int num_1;
	int num_2;
	int result;
	int i;
	int x;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; ++i)
	{
		for (x = 0; argv[i][x] != '\0'; ++x)
		{

			if (!isdigit(argv[i][x]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[2]);
	result = (num_1 * num_2);

	return (result);
}
