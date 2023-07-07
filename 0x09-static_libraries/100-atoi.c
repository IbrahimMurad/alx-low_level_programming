#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: the string to be converted
 *
 * Return: the integer converted form the string
 */

int _atoi(char *s)
{
	int i = 0, found = 0, index = 0, minus = 0, sign = 1, intgr, f_index;

	while (s[i] != '\0')
	{
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			index = i;
			found = 1;
			break;
		}
		else if (s[i] == '-')
		{
			minus++;
		}
		i++;
	}
	if (found == 0)
	{
		return (0);
	}
	if (minus % 2 != 0)
	{
		sign = -1;
	}
	f_index = index;
	while ((s[f_index] >= '0') && (s[f_index] <= '9'))
	{
		f_index++;
	}
	intgr = 0;
	for (i = index; i < f_index; i++)
	{
		intgr = (10 * intgr) + (sign * (s[i] - '0'));
	}
	return (intgr);
}
