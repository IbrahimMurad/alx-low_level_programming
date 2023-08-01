#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: a pointer to a pointer to the first node
 * @index: the index of the node to be deleted
 *
 * Return: 1 if successful or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *before;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	before = *head;
	current = current->next;
	for (i = 1; current != NULL; current = current->next)
	{
		if (i == index)
		{
			before->next = current->next;
			free(current);
			return (1);
		}
		else
		{
			i++;
			before = current;
		}
	}
	return (-1);
}
