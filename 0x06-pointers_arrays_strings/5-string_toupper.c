/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string to change its lowercase letters to uppercase
 *
 * Return: a pointer to the new string
 */

char *string_toupper(char *s)
{
	char *temp = s;
	int i;
	int diff = 'a' - 'A';
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
		{
			s[i] -= diff;
		}
	}
	return (temp);
}
