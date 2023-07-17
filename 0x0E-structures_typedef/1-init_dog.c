#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to the struct dog variable
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner's name
 *
 * Return: a pointer to the initialized struct dog variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
