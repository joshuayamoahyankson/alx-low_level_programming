#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - the function prototype that gets
 * the length of a prefix substring
 * @s: the first function parameter(string to scan)
 * @accept: the second function parameter(string to match)
 * Description: Write a function that gets the length of a prefix substring.
 * Prototype: unsigned int _strspn(char *s, char *accept);
 * Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int scan;

	scan = strspn(s, accept);

	return (scan);
}
