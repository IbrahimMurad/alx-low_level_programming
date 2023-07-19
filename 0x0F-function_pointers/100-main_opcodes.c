#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: a variable that stores
 * the number of arguments passed by the user
 * @argv: an array of strings that stores the arguments
 * passed by the user (including the prog excution)
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, num_of_bytes;
	int (*fun_ptr)(int, char**) = &main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_of_bytes = atoi(argv[1]);
	if (num_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < num_of_bytes - 1; i++)
	{
		printf("%02hhx ", *((int *) (fun_ptr + i)));
	}
	printf("%02hhx\n", *((int *) (fun_ptr + i)));
	return (0);
}
