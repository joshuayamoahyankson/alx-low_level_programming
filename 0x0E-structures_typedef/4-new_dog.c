#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * *new_dog - the new dog struct to be created
 * @name: the first struct member of tyoe char
 * @age: the second struct member of type float
 * @owner: the third struct member of type char
 * Description: Write a function that creates a new dog
 * Prototype: dog_t *new_dog(char *name, float age, char *owner);
 * You have to store a copy of name and owner
 * Return NULL if the function fails
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newDog = (struct dog *)malloc(sizeof(struct dog));

	newDog->name = (char *)malloc(strlen(name) + 1);
	newDog->owner = (char *)malloc(strlen(owner) + 1);

	if (newDog == NULL)
	{
		return (NULL);
	}
	strcpy(newDog->name, name);
	newDog->age = age;
	strcpy(newDog->owner, owner);

	return (newDog);
}
