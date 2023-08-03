/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to search its bits
 * @index: the index of the bit to be searched
 *
 * Return: the bit value at the index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
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
	return ((n & bit) >> index);
}
