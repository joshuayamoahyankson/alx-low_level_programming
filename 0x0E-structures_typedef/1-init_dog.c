#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - the function prototype that initializes the struct dog
 * @d: the first parameter of type struct dog
 * @name: the second parameter of type char to be initialized
 * @age: the third parameter of type float to be initialized
 * @owner: the last parameter of type char to be initialized
 * Description: Write a function that initialize a variable
 * of type struct dog
 * Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
 * Return: Always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

}
