#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the number of bytes to be revserved
 *
 * Return: a pointer to the allocated memory
 * Or a status value of 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	char *temp = malloc(b * sizeof(*temp));

	if (temp == NULL)
	{
		exit(98);
	}
	return (temp);
}
