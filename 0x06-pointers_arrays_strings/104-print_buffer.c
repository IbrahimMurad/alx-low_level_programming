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

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08lx: ", &b[i] - b);
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				printf("%02x", b[j]);
			}
			else
			{
				printf("  ");
			}
			if (j % 2 != 0)
			{
				printf(" ");
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
