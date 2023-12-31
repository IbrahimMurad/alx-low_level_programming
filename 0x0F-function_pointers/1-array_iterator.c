#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *  on each element of an array.
 *  @array: the given array of elements
 *  that will be passed (element-by-element) to the given function
 *  @size: the size of the array
 *  @action: a pointer to the function you need to use
 *
 *  Return: Nothing
 */

void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
