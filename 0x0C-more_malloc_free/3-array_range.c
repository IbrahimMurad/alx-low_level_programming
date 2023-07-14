#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the minimum (the first) value
 * @max: the maixmum (last) value
 *
 * Return: a pointer to the array
 */

int *array_range(int min, int max)
{
	int *temp_arr;
	int i;
	int length = max - min  + 1;

	if (min > max)
	{
		return (NULL);
	}
	temp_arr = malloc(sizeof(int) * length);
	if (temp_arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		temp_arr[i] = min + i;
	}
	return (temp_arr);

}
