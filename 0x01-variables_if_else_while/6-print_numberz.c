#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all the alphabets using putchar function only
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
