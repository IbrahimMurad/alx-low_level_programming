/**
 * _isdigit -  checks if the input is digit 0 through 9
 * @c: the integer to check
 *
 * Return: 1 if is a digit
 * 0 if is not a digit
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
