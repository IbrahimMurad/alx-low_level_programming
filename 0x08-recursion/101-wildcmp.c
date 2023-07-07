/**
 * cmp - compares two strings
 * The special char * can replace any string
 * @s1: the first string
 * @s2: the second string
 * @i: the index of the first string
 * @j: the index of the second string
 *
 * Return: 1 if identical or 0 if not
 */

int cmp(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
	{
		return (1);
	}
	else if (s2[j] == '\0' && s1[i] != '\0')
	{
		if (s2[j - 1] == '*')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else if (s1[i] == '\0' && s2[j] != '\0')
	{
		if (s2[j] == '*')
		{
			return (cmp(s1, s2, i, j+1));
		}
		else
		{
			return (0);
		}
	}
	if (s1[i] == s2[j])
	{
		return (cmp(s1, s2, i+1, j+1));
	}
	else if (s2[j] == '*')
	{
		return (cmp(s1, s2, i, j+1));
	}
	else
	{
		if (s2[j - 1] != '*')
		{
			return (0);
		}
		else
		{
			return (cmp(s1, s2, i + 1, j));
		}
	}
}

/**
 * wildcmp - compares two strings to look if identical
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if identical or 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	return (cmp(s1, s2, 0, 0));
}
