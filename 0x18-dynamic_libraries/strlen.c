
/**
 * _strlen - returns the length of a string.
 * @s: the string
 *
 * Return: int (the length of the string @s)
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
