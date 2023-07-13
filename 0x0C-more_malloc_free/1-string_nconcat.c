#include <stdlib.h>
#include <string.h>
/**
 * null_to_zero - finds the lengths of a string
 * @s: the string
 *
 * Return: the length of the string
 * Or 0 if the pointer to the string is NULL
 */

unsigned int null_to_zero(char *s)
{
	if (s == NULL)
	{
		return (0);
	}
	else
	{
		return (strlen(s));
	}
}

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
	unsigned int l1 = 0, l2 = 0;

	l1 = null_to_zero(s1);
	l2 = null_to_zero(s2);
	temp = malloc(l1 + n + 1);
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
		for (i = 0; i < l2; i++)
		{
			temp[l1 + i] = s2[i];
		}
		temp[l1 + i] = '\0';
	}
	return (temp);
}
