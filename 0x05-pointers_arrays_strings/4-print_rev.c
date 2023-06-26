#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string to be printed in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, l = 0;

	while (*(s + l) != '\0')
	{
		l++;
	}

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
