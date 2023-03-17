#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point of program
 * Description: Write a C program that prints the size of various
 * types on the computer it is compiled and run on.
 * You should produce the exact same output as in the example
 * Warnings are allowed
 * Your program should return 0
 * You might have to install the package libc6-dev-i386 on
 * your Linux to test the -m32 gcc option
 * Return: Always 0
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of a int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
