#ifndef DOG
#define DOG

/**
 * struct dog - Define a new type struct dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: name of teh owner of the dog
 *
 * Description: this data type represents a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to the struct dog variable
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner's name
 *
 * Return: a pointer to the initialized struct dog variable
 */


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
