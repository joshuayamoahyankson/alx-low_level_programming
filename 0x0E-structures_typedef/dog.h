#ifndef dog_h
#define dog_h

/**
 * struct dog - the dogs information / features stated here
 * @name: the first dog parameter of type char
 * @age: the second dog parameter of type float
 * @owner: the third dog parameter of type char
 * Description: Define a new type struct dog with the following elements:
 * name, type = char *
 * age, type = float
 * owner, type = char *
 * Return: Always 0
 */

struct dog {
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
