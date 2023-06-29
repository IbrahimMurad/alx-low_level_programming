#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: the string to be capitalized
 *
 * Return: a pointer to the capitalized string
 */

char *cap_string(char *s)
{
	char *temp = s;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	s[0] = toupper(s[0]);

	for (i = 1; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j])
			{
				s[i + 1] = toupper(s[i + 1]);
				break;
			}
		}
	}
	return (temp);
}
