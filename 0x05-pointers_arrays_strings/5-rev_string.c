#include "main.h"
#include <stdio.h>

/** rev_string -  reverses a string.
 * @s: the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	/* Calculateing the length of the string s */
	char *temp = s;
	int l, i;

	l = 0;
	while (*(s + l) != '\0')
	{
		l++;
	}
	temp = s + l + 1;
	for (i = 0; i <= l; i++)
	{
		*(temp + i) = *(s + i);
	}
	printf("%s\n%s\n", s, temp);
	for (i = 0; i < l; i++)
	{
		*(s + i) = *(temp + l - 1 - i);
	}
}
