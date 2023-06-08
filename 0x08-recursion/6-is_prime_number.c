#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * is_prime_number - the function prototype to return whether
 * a prime number or not
 * @n: the function parameter to be returned
 * Description: Write a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * Prototype: int is_prime_number(int n);
 * Return: Always 0
 */

int is_prime_number(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (n % 2) + 10 * is_prime_number(n/2);
}
