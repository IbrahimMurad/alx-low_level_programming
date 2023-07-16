#include <stdlib.h>

/**
 * alloc_grid - creats a 2 dimensional array of integers.
 * @width: the number of columns
 * @height: the number of rows
 *
 * Return: a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **temp;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	temp = malloc(height * sizeof(int*));
	if (temp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		temp[i] = malloc(width * sizeof(int*));
		if (temp[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			temp[i][j] = 0;
		}
	}
	return (temp);
}
