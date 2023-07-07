#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: an array of the arguments
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	if (argv[0][0] != '\0')
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
