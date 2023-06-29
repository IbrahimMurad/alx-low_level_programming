#include "main.h"

/**
 * print_number -  prints an integer.
 * @n: is the integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	int abs;

	if (n < 0)
	{
		abs = -n;
		_putchar('-');
	}
	else
	{
		abs = n;
	}
	if (abs < 10)
	{
		_putchar(abs + '0');
	}
	else
	{
		print_number(abs / 10);
		_putchar((abs % 10) + '0');
	}
}
