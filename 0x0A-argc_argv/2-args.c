#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of the given arguments
 * @argv: an array that holds the arguments
 *
 * Return: (1) success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
