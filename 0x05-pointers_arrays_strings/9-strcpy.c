/**
 * _strcpy - copies a string to a buffer
 * @dest: the buffer
 * @src: the string
 *
 * Return: a pointer to the buffer @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, l;

	l = 0;
	while (*(src + l) != '\0')
	{
		l++;
	}
	
	for (i = 0; i <= l; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
