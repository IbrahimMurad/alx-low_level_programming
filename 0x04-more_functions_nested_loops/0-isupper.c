/**
 * _isupper -  checks if the input is an upper case charachter or not
 * @c: the integer to check
 *
 * Return: 1 if uppercase
 * 0 if not uppercase
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
