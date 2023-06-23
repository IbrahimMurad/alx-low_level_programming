#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = -100; i < 100000; i += 100)
	{
		print_number(i);
		_putchar('\n');
	}
	return (0);
}
