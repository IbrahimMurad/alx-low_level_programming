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
	char *temp_name;
	char *temp_owner;
	dog_t *temp;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	else
	{
		temp_name = name;
		temp_owner = owner;
	}
	temp = malloc(sizeof(struct dog));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->name = temp_name;
	temp->age = age;
	temp->owner = temp_owner;
	return (temp);
}
