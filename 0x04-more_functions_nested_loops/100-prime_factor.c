#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int number = 612852475143;
	long int i = 2;

	while (number > i)
	{
		if (number % i == 0)
		{
			number = number / i;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", i);
	return (0);
}
