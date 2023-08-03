#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string consisting of 0s and 1s chars representing the binary number
 *
 * Return: the unsigned integer or 0 if there are chars other than 0 or 1
 * or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num <<= 1;
			num |= (b[i] - '0');
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (num);
}
