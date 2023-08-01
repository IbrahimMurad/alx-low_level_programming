#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints all the elements of a listint_t list
 * Also, it handles the loops if it exist.
 * @head: a pointer to the first node in the list (the head)
 *
 * Return: Nothing
 */

size_t print_listint_safe(listint_t *head)
{
	size_t count = 0, i;
	listint_t *temp;
	listint_t **ptrlist = malloc(sizeof(head) * 1024);

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		ptrlist[count] = head;
		printf("[%p] %d\n", (void *) head, head->n);
		count++;
	}
	for (temp = head->next; temp != NULL; temp = temp->next)
	{
		ptrlist[count] = temp;
		for (i = 0; i < count; i++)
		{
			if (temp == ptrlist[i])
			{
				printf("-> [%p] %d\n", (void *) temp, temp->n);
				return (count);
			}
		}
		printf("[%p] %d\n", (void *) temp, temp->n);
		count++;
	}
	return (count);
}
