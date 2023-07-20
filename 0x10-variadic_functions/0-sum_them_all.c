#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - gives the sum of its all parameters
 * @n: the number of integers to be sumed
 *
 * Return: the sum of all the arguments
 * or 0 if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
