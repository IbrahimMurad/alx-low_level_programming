#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: the new dog's name
 * @age: the new dog's age
 * @owner: the new dog's owner's name
 *
 * Return: a pointer to the new dog_t type variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *temp;

	temp = malloc(sizeof(struct dog));
	if (temp == NULL)
	{
		return (NULL);
	}

	if (name == NULL)
	{
		temp->name = "";
	}
	else
	{
		temp->name = name;
	}
	temp->age = age;
	if (owner == NULL)
	{
		temp->owner = "";
	}
	else
	{
		temp->owner = owner;
	}
	return (temp);
}
