#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = '0'; j <= '9'; j++)
		{
			_putchar(j);
		}
		for (j = '0'; j <= '4'; j++)
		{
			_putchar('1');
			_putchar(j);
		}
		_putchar('\n');
	}
}
