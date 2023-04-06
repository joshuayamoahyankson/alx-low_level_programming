#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * _sqrt_recursion - the function prototype that returns
 * the natural sqaure root of a number
 * @n: the function parameter whose square root is to be found
 * Description: Write a function that returns the
 * natural square root of a number
 * Prototype: int _sqrt_recursion(int n);
 * If n does not have a natural square root, the function should return -1
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0 || n % 10 != 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(sqrt(n)));
}
