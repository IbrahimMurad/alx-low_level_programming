#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all the numbers of  base 16
 * in lowercase
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
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
