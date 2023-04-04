#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - the function prototype that locates a substring
 * @haystack: the first function parameter
 * @needle: the second function parameter
 * Description: Write a function that locates a substring
 * Prototype: char *_strstr(char *haystack, char *needle);
 * The _strstr() function finds the first occurrence of the substring needle
 *  in the string haystack. The terminating null bytes (\0) are not compared.
 *  Returns a pointer to the beginning of the located substring,
 *  or NULL if the substring is not found.
 *  Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *sub_string;

	sub_string = strstr(haystack, needle);

	return (sub_string);
}
