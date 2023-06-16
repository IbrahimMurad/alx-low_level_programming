#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all possible single digit numbers
 * separated by , and a space
 * using only putchar function
 *
 * Return: ALways 0 (success)
 */

int main(void)
{
	int i;
	
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
