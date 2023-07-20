#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: he string to be printed between numbers
 * @n: he number of integers passed to the function
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i < n - 1)
			{
				printf("%d%s", va_arg(args, int), separator);
			}
			else
			{
				printf("%d\n", va_arg(args, int));
			}
		}
	}
}
