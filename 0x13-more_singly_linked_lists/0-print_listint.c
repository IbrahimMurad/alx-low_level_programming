#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: a pointer to the first node in the list (the head)
 *
 * Return: Nothing
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *temp;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		printf("%d\n", h->n);
		count++;
	}
	for (temp = h->next; temp != NULL; temp = temp->next)
	{
		printf("%d\n", temp->n);
		count++;
	}
	return (count);
}
