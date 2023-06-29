#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a buffer
 * @size: the size of teh buffer to be printed
 * @b: the buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08lx: ", &b[i] - b);
		for (j = i; j < i + 10; j +=2)
		{
			if (j < size)
			{
				printf("%02x%02x ", b[j], b[j + 1]);
			}
			else
			{
				printf("     ");
			}
		}
		for (j = i; j < i + 10 && j < size; j++)
		{
			if (isprint(b[j]))
			{
				printf("%c", b[j]);
			}
			else
			{
				printf(".");
			}
		}
		printf("\n");
	}
}
