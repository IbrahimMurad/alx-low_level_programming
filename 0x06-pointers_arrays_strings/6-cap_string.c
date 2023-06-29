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
	char sep[13];
	int i, j;

	sep[0] = ' ';
	sep[1] = '\t';
	sep[2] = '\n';
	sep[3] = ',';
	sep[4] = ';';
	sep[5] = '.';
	sep[6] = '!';
	sep[7] = '?';
	sep[8] = '"';
	sep[9] = '(';
	sep[10] = ')';
	sep[11] = '{';
	sep[12] = '}';

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
