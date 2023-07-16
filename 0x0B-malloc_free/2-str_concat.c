#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2
 * and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, size1, size2, size;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	size1 = strlen(s1);
	size2 = strlen(s2);
	size = size1 + size2;
	ptr = malloc(size + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}
	for (; i < size; i++)
	{
		ptr[i] = s2[i - size1];
	}
	ptr[i] = '\0';
	return (ptr);
}
