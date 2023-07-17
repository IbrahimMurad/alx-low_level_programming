#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	char *temp_name, *temp_owner;
	dog_t *temp;

	if (name == NULL)
	{
		temp_name = "";
	}
	else
	{
		temp_name = malloc(strlen(name) + 1);
		if (temp_name == NULL)
		{
			return (NULL);
		}
	}
	if (owner == NULL)
	{
		temp_owner = "";
	}
	else
	{
		temp_owner = malloc(strlen(owner) + 1);
		if (temp_owner == NULL)
		{
			free(temp_owner);
			return (NULL);
		}
	}
	strcpy(temp_name, name);
	strcpy(temp_owner, owner);
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
