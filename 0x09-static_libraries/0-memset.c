/**
 * _memset - fills memory with a constant byte.
 * @s: a pointer to the memory
 * @b: the charachter to fill the memory
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
