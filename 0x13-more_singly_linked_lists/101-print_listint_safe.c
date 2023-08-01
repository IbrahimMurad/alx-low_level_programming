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
		printf("[%#lx] %d\n", ((long int) head) % 0xffffffff, head->n);
		count++;
	}
	for (temp = head->next; temp != NULL; temp = temp->next)
	{
		ptrlist[count] = temp;
		for (i = 0; i < count; i++)
		{
			if (temp == ptrlist[i])
			{
				printf("-> [%#lx] %d\n", ((long int) temp) % 0xffffffff, temp->n);
				return (count);
			}
		}
		printf("[%#lx] %d\n", ((long int) temp) % 0xffffffff, temp->n);
		count++;
	}
	return (count);
}
