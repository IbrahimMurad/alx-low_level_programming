/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the number where the bit to be changed is
 * @index: the index of the bit to be set to 1
 *
 * Return: 1 if ir worked or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int bit = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	for (i = 0; i < index; i++)
	{
		bit <<= 1;
	}
	(*n) |= bit;
	return (1);
}
