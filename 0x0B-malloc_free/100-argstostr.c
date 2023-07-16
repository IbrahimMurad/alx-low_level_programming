#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: the number of arguments (passed by main function)
 * @av: the array of strings that holds the arguments
 *
 * Return: a pointer to the concatenated arguments
 */

char *argstostr(int ac, char **av)
{
	int size = 0;
	int i, j, k;
	char *ptr;

	for (i = 1; i < ac; i++)
	{
		size = size + strlen(av[i]) + 1;
	}
	ptr = malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; j < (int) strlen(av[i]); j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	return (ptr);
}
