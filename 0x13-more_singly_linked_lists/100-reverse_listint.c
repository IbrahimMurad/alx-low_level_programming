#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: a pointer to a pointer to the first node in the list (the head)
 *
 * Return: Nothing
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before, *current, *after;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	before = *head;
	current = (*head)->next;
	if (current == NULL)
	{
		return (*head);
	}
	before->next = NULL;
	after = current->next;
	current->next = before;
	while (after)
	{
		before = current;
		current = after;
		after = after->next;
		current->next = before;
	}
	*head = current;
	return (*head);
}
