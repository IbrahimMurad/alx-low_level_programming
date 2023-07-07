/**
 * _isalpha - checks if the given character is an alphabet
 * @c: the given character
 *
 * Return: 1 if c is an alphabet or 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
