#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all the alphabets in reverse
 * and in lowercase
 * using only putchar function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
