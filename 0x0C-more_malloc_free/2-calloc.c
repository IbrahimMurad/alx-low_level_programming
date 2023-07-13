#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements in the array
 * @size: the size of each element in bytes
 *
 * Return: a pointer to the allocated memory.
 * Or NULL if nmemb or size is 0 or ,alloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *temp;

	if (nmemb == 0 || size == 0)
	{
		temp = NULL;
		return (temp);
	}

	temp = malloc(size * nmemb);
	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);
}
