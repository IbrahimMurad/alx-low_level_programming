#include <stdio.h>
#include <ctype.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the given string
 * @accept: the given substring
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int res = 0, temp = 0;

	for (i = 0; isalpha(s[i]); i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				res++;
				break;
			}
		}
		if (temp == res)
		{
			res = 0;
			return (res);
		}
		temp = res;
	}
	return (res);
}
