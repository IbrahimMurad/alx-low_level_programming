#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all the single digits of base 10
 * from 0 to 9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');
	return (0);
}
