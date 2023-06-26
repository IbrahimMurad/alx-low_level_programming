#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * followed by a new line
 * @a: the array
 * @n: the number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d\n", a[i]);
			}
			else
			{
				printf("%d, ", a[i]);
			}
		}
	}
}
