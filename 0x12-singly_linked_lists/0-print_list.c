#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the head of the linked list
 *
 * Return: the number of nodes
 */

size_t print_list(list_t *h)
{
	size_t count = 0;
	list_t *temp = h;

	if (h == NULL)
	{
		return (0);
	}
	while (temp)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		count++;
	}
	return (count);
}
