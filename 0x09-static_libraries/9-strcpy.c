/**
 * _strcpy - copies a string to a buffer
 * @dest: the buffer
 * @src: the string
 *
 * Return: a pointer to the buffer @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
