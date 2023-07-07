/**
 * _isupper - checks if the given character is upper case or not
 * @c: the given character
 *
 * Return: 1 if c is upper case or 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
