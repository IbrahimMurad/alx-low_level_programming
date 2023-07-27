#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list
 * @h: the head of the list
 *
 * Return: the number of elements in the list
 */

size_t list_len(list_t *h)
{
	size_t count = 0;
	list_t *temp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
