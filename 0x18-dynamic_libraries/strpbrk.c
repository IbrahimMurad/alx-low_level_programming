#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * , or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
