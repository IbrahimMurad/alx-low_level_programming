#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints all the elements of a listint_t list
 * Also, it handles the loops if it exist.
 * @head: a pointer to the first node in the list (the head)
 *
 * Return: Nothing
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *) temp, temp->n);
		count++;
		if (temp->next >= temp)
		{
			printf("-> [%p] %d\n", (void *) temp->next, (temp->next)->n);
			break;
		}
		temp = temp->next;
	}
	return (count);
}
