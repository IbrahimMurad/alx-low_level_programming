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
	int index, i, minus, int_sign, the_integer, f_index;

	index = 0;
	minus = 0;
	while ((s[index] != '\0') || !((s[index] >= '0') && (s[index] <= '9')))
	{
		index++;
	}
	if (index == 0)
	{
		return (0);
	}
	for (i = 0; i < index; i++)
	{
		if (s[i] == '-')
		{
			minus++;
		}
	}
	if (minus % 2 == 0)
	{
		int_sign = 1;
	}
	else
	{
		int_sign = -1;
	}
	f_index = index;
	while ((s[f_index] >= '0') && (s[f_index] <= '9'))
	{
		f_index++;
	}
	the_integer = s[index] - '0';
	for (i = index + 1; i < f_index; i++)
	{
		the_integer = (10 * the_integer) + (s[i] - '0');
	}
	return (the_integer * int_sign);
}
