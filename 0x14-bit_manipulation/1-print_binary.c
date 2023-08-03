#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		_putchar(n + '0');
	}
	else
	{
		print_binary(n / 2);
		_putchar(n % 2 + '0');
	}
}
