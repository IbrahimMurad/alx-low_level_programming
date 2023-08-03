/**
 * flip_bits - returns the number of bits we would need to flip
 * to get from number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int flipped = 0;
	unsigned long int bit = 1;

	for (i = 0; i < 64; i++)
	{
		if ((n & bit) != (m & bit))
		{
			flipped++;
		}
		bit <<= 1;
	}
	return (flipped);
}
