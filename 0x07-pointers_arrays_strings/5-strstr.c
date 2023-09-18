#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the string to be searched
 * @needle: the substring to be searched for
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (haystack[i])
	{
		if (haystack[i] == *needle)
		{
			j = 0;
			while (needle[j])
			{
				if (haystack[i + j] == '\0')
				{
					return (NULL);
				}
				if (haystack[i + j] != needle[j])
				{
					break;
				}
				j++;
			}
			if (haystack[i + j - 1] == needle[j - 1])
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
