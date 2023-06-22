#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - the function name that returns void
 * @name: a function parameter that is an array of character(s)
 * @f: a function pointer that has a char argument and returns void
 * Description: Write a function that prints a name
 * Prototype: void print_name(char *name, void (*f)(char *));
 * Return: Always 0 on success
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
