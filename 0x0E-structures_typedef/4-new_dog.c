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
	char *temp_name;
	char *temp_owner;
	unsigned int name_size, owner_size;
	int i = 0;
	dog_t *temp;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	else
	{
		name_size = strlen(name);
		owner_size = strlen(owner);
		temp_name = malloc(name_size + 1);
		if (temp_name == NULL)
		{
			return (NULL);
		}
		temp_owner = malloc(owner_size + 1);
		if (temp_owner == NULL)
		{
			free(temp_owner);
			return (NULL);
		}
	}
	while (name[i] != '\0')
	{
		temp_name[i] = name[i];
		i++;
	}
	i = 0;
	while (owner[i] != '\0')
	{
		temp_owner[i] = owner[i];
		i++;
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
