
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - the Entry point of the program that prints
 * the minimum number of coins to make change for an amount of money
 * @argc: the function parameter to count the
 * arguments passed to command-line
 * @argv: the arguments passed at command-line
 * Description: Write a program that prints the minimum number of coins
 * to make change for an amount of money
 * Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your program is not exactly 1
 * print Error, followed by a new line, and return 1
 * you should use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative,
 * print 0, followed by a new line
 * You can use an unlimited number of coins of
 * values 25, 10, 5, 2, and 1 cent
 * Return: Alway 0
 */

int main(int argc, char **argv)
{
	int change = atoi(argv[1]);
	int change_counter = 0;
	int change_1, change_2, change_3, change_4;
	int diff;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (change < 0)
	{
		printf("%d\n", 0);
	}

	diff = 0;
	change_1 = change / 25;
	change_counter += change_1;
	diff = change - (change_1 * 25);

	change_2 = diff / 10;
	change_counter += change_2;
	diff = diff - (change_2 * 10);
	
	change_3 = diff / 5;
	change_counter += change_3;
	diff = diff - (change_3 * 5);




