/**
 * _memcpy - copies memory area
 * @dest: the pointer to the memory where the copy will be stored
 * @src: a pointer where the memory area to be copied is
 * @n: the number of bytes to be copied
 *
 * Return: dest (the pointer to the new memory)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
