#include "lists.h"


/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: a pointer to the first node in the list (head)
 *
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *temp;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		count++;
	}
	for (temp = h->next; temp != NULL; temp = temp->next)
	{
		count++;
	}
	return (count);
}
