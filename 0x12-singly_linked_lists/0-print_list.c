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
	list_t *temp = NULL;

	temp = h;
	if (h == NULL)
	{
		return (0);
	}
	while (temp)
	{
		if (!temp->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		temp = temp->next;
		count++;
	}
	return (count);
}
