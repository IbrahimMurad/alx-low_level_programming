#include <stdio.h>

/**
 * main - Entry point
 *
 * This prog prints all possible different combinations of two digits
 * separated by , followed by a space
 * the two digits must be different
 * 01 and 10 are considered the same combination
 * printing only the smallest combination
 * usuing only putchar function (maximum 5 times)
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (!((i == '8') && (j == '9')))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
