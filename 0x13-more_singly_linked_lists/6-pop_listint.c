#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to a pointer to the first node (ptr to head)
 *
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int popped_data;

	if (head == NULL)
	{
		return (0);
	}
	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = (*head)->next;
	popped_data = temp->n;
	free(temp);
	return (popped_data);
}
