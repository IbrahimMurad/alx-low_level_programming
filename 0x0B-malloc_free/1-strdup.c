#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  allocate a new space in memory,
 * and fills it with a copy of the string given as a parameter.
 * @str: the given string
 *
 * Return: a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;
	unsigned int size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str);
	ptr = malloc(size + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
