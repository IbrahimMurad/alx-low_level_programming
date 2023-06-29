/**
 * _strncat -  concatenates two strings.
 * @dest: the first string
 * @src: the second string
 * @n: the number of bytes used from @src
 *
 * Return: a pointer to the new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\n') && (j < n))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
	{
		dest[i] = src[j];
	}
	dest[i + 1] = '\0';
	return (dest);
}
