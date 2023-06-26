#include "main.h"
#include <string.h>

/**
 * rev_string -  reverses a string.
 * @s: the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	char temp[512];
	int l, i;

	l = 0;
	while (*(s + l) != '\0')
	{
		l++;
	}
	strcpy(temp, s);	
	for (i = 0; i < l; i++)
	{
		*(s + i) = *(temp + l - 1 - i);
	}
}
