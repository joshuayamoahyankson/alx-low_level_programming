#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - the function prototype to search a string for any
 * of a set of bytes.
 * @s: the first function parameter to be searched/scanned
 * @accept: the function prototype containing caharacter to match
 * Description: Write a function that searches
 * a string for any of a set of bytes
 * Prototype: char *_strpbrk(char *s, char *accept);
 * The _strpbrk() function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * Returns a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found.
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	char *search;

	search = strpbrk(s, accept);

	return (search);
}
