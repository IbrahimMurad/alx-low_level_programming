#include <ctype.h>

/**
 * leet - encodes a string into 1337 where
 * letter a and A is replaced by 4
 * letter e and E is replaced by 3
 * letter o and O is replaced by 0
 * letter t and T is replaced by 7
 * letter l and L is replaced by 1
 * @s: is the string to be encoded
 *
 * Return: the encoded string
 */

char *leet(char *s)
{
	char *temp = s;
	int i, j;
	char arr[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (tolower(s[i]) == arr[j])
			{
				s[i] = j + '0';
			}
		}
	}
	return (temp);
}
