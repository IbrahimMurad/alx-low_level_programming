#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to concatenates from s2
 *
 * Return: a pointer to a new memory
 * containes s1 followed by n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp;
	unsigned int i;
	unsigned int l1, l2;

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (s1 == NULL)
	{
		l1 = 0;
	}
	if (s2 == NULL)
	{
		l2 = 0;
	}
	temp = malloc(l1 + 1 + n);

	if (temp == NULL)
	{
		return (temp);
	}
	for (i = 0; i < l1; i++)
	{
		temp[i] = s1[i];
	}
	if (n < l2)
	{
		for (i = 0; i < n; i++)
		{
			temp[l1 + i] = s2[i];
		}
		temp[l1 + i] = '\0';
	}
	else
	{
		for (i = 0; i <= l2; i++)
		{
			temp[l1 + i] = s2[i];
		}
	}
	return (temp);
}
