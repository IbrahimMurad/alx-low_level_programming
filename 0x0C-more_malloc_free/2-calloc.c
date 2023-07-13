#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements in the array
 * @size: the size of each element in bytes
 *
 * Return: a pointer to the allocated memory.
 * Or NULL if nmemb or size is 0 or malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *temp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	temp = malloc(size * nmemb);
	for (i = 0; i < size * nmemb; i++)
	{
		temp[i] = 0;
	}
	return (temp);
}
