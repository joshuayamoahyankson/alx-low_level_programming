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

	if (newDog == NULL)
	{
		return (NULL);
	}
	size_t name_len = strlen(name);
	size_t owner_len = strlen(owner);

	char *name_copy = malloc(name_len + 1);
	char *owner_copy = malloc(owner_len + 1);

	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	newDog->name = name_copy;
	newDog->age = age;
	newDog->owner = owner_copy;

	return (newDog);
}
