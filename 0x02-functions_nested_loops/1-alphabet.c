#include "main.h"

/**
 * print_alphabet - writes all the alphabets in lower case to scrren
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
