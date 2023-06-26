#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, l;

	l = 0;
	while (*(str + l) != '\0')
	{
		l++;
	}

	if ((l % 2) != 0)
	{
		for (i = (l / 2) + 1; i < l; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = l / 2; i < l; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
