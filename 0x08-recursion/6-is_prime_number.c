/**
 * prime_test - tests the given number
 * if it divisible by the test integer or not
 * @n: the number to check if it is prime or not
 * @i: the test integer
 *
 * Return: 0 if not prime and 1 if it is prime
 */

int prime_test(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_test(n, i - 1));
}

/**
 * is_prime_number - checks if the given number is a prime or not
 * @n: the given number to check
 *
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (prime_test(n, n / 2));
	}
}
