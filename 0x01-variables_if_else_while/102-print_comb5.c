#include <stdio.h>

/**
 * main - Entry point
 *
 * This prog prints all possible combinations of two two-digit numbers.
 * the numbers should range from 00 to 99
 * the two numbers should be separated by space
 * the combination of numbers are separated by , followed by a space
 * 00 01 and 01 00 are considered the same combination of numbers
 * usuing only putchar function (maximum 5 times)
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if (((10 * i) + j) < ((10 * k) + l))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (!(i == '9' && j == '8' && k == '9' && l == '9'))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
