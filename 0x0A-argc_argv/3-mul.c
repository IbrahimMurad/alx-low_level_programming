#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of the given arguments
 * @argv: an array that holds the arguments
 *
 * Return: (1) success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
