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
	int i;
	const listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp)
	{
		i = printf("[%p] %d\n", (void *) temp, temp->n);
		if (i < 0)
		{
			exit(98);
		}
		count++;
		if (temp->next >= temp)
		{
			i = printf("-> [%p] %d\n", (void *) temp->next, (temp->next)->n);
			if (i < 0)
			{
				exit(98);
			}
			break;
		}
		temp = temp->next;
	}
	return (count);
}
