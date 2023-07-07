#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int change = 0;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 1)
	{
		printf("0\n");
		return (0);
	}
	change += cents / 25;
	cents %= 25;
	change += cents / 10;
	cents %= 10;
	change += cents / 5;
	cents %= 5;
	change += cents / 2;
	cents %= 2;
	change += cents;
	printf("%d\n", change);
	return (0);
}
