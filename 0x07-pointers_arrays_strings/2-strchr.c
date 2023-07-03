#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: the string in which the charachter to be searched is
 * @c: the charachter to be searced
 *
 * Return: a pointer where the character is stored
 */

char *_strchr(char *s, char c)
{
	int i;
	char *temp = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (temp);
}
