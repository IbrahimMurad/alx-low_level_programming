#include <stdio.h>

/**
 * main - Entry point
 *
 * This prog prints all possible different combinations of three digits
 * separated by , followed by a space
 * the three digits must be different
 * 012 and 210 are considered the same combination
 * printing only the smallest combination
 * usuing only putchar function (maximum 5 times)
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (!((i == '7') && (j == '8') && (k == '9')))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
