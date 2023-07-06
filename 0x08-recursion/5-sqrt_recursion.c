/**
 * sqrt_try - tries the numbers starts from 0
 * multiplying the number by itself and checks if it equals the number n
 * @n: the number to calculate its sqrt
 * @i: the number to try
 *
 * Return: the square root
 */

int sqrt_try(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n && (i + 1) * (i + 1) > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_try(n, i + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to calcuate its square root
 *
 * Return: the square root (success)
 *  -1 if less than 0 or no natural sqrt (failure)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_try(n, 0));
	}
}
