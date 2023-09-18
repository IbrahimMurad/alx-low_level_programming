/**
 * _islower - checks if the given character is lower case or not
 * @c: the given character
 *
 * Return: 1 if c is lower case or 0 if not
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
