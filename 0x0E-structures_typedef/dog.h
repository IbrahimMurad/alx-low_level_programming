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

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
