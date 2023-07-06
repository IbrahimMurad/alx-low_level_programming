#include "main.h"

/**
 * factorial -  returns the factorial of a given number.
 * @n: the number which we want the factorial for
 *
 * Return: the factorial of the number (success)
 *  -1 (failure) for numbers less than 0
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
