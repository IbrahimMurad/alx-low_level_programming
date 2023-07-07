#include <string.h>
/**
 * palindrome_reduced - checks if a given string is a palindrome
 * @s: the given string
 * @n: the length of the given string
 * @i: the index at which we check the characters
 *
 * Return: 1 if palindrome and 0 if not
 */

int palindrome_reduced(char *s, int n, int i)
{
	if (i == n - 1)
	{
		return (1);
	}
	if (s[i] == s[n - i - 1])
	{
		return (1 * palindrome_reduced(s, n, i + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - checks if the given string is a palindrome
 * @s: the given string
 *
 * Return: 1 if s is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int n = strlen(s);

	return (palindrome_reduced(s, n, 0));
}
