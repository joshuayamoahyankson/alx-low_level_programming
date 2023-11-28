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
	if (d == NULL)
	{
		printf("\n");
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
