#include "main.h"
/**
 * print_number -  prints an integer.
 * @n: is the integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	int tens = 1;
	int abs;
	int temp_n;

	if (n < 0)
	{
		_putchar('-');
		abs = -n;
	}
	else
	{
		abs = n;
	}
	temp_n = abs;
	while (temp_n > 0)
	{
		temp_n /= 10;
		tens *= 10;
	}
	tens /= 10;
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		temp_n = abs;
		while (tens > 0)
		{
			_putchar((temp_n / tens) + '0');
			temp_n = temp_n % tens;
			tens /= 10;
		}
	}
}
