#include <stdlib.h>

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian or 1 if small endian
 */

int get_endianness(void)
{
	int temp = 0x4200014c;
	char *c  = (void *) &temp;

	return (*(c + 1));
}
