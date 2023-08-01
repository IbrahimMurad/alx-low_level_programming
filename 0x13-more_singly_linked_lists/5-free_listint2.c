#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the first node (head)
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
