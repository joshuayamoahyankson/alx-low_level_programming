#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * _pow_recursion - the function prototype that returns the
 * value of x raised to the value of y.
 * @x: the function parameter to act as base number
 * @y: the function parameter to act as a power
 * Description: Write a function that returns
 * the value of x raised to the power of y
 * Prototype: int _pow_recursion(int x, int y);
 * If y is lower than 0, the function should return -1
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
