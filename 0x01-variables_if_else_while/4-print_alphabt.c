#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all the alphabets except for q and e
 * using putchar function only
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if ( (i != 'q') && (i != 'e') )
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
