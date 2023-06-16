#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all the sigle digits of base 10
 * starting from 0 to 9
 * using only putchar function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
