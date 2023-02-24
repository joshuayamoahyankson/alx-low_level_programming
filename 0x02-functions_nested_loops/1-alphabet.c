#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_alphabet - Make the alphabet
 * Description: prints the alphabet, in lowercase
 * Return: Always 0
 * 1-alphabet.c: this is the file name for the given task
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');

}
