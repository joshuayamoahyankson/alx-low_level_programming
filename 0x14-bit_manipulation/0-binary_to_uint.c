#include "main.h"

/**
 *  binary_to_uint - the function name that converts a binary
 *  to unsigned int
 *  @b: the function parameter that is the binary to be converted
 * Write a function that converts a binary number to an unsigned int
 * Prototype: unsigned int binary_to_uint(const char *b);
 * where b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int var = 0;
	int i;
	int index;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (index = 0; b[index] != '\0'; ++index)
	{
		var = (var << 1) | (b[index] - '0');
	}
	return (var);

}
