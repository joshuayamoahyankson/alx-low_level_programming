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
	int num_1; int num_2;

	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		num_1 = (n / 2);
		num_2 = _sqrt_recursion(n - 1);

		if (num_1 * num_2 > n)
		{
			return _sqrt_recursion(n - 1);
		}
		else if (num_2 * num_2 == n)
		{
			return num_2;
		}
		else
		{
			return (_sqrt_recursion(n - 1));
		}
	}
}
