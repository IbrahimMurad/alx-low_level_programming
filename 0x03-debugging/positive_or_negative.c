#include <stdio.h>
#include <stdlib.h>

/**
 * positive_or_negative - checks if the input is positive or negative or zero
 * and prints the result
 *
 * Return: Always void
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%i is zero\n", i);
	}
	else
	{
		printf("%i is negative\n", i);
	}
}
