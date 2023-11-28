#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - the function prototype that prints a dog
 * @d: the dog to be printed of type struct dog
 * Description: Write a function that prints a struct dog
 * Prototype: void print_dog(struct dog *d);
 * Format: see example bellow
 * You are allowed to use the standard library
 * If an element of d is NULL, print (nil) instead of this element.
 * (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 * Return: Always 0
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (d->age == 0)
	{
		printf("Age: (nil)\n");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}

	if (d == NULL)
	{
		printf("");
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
