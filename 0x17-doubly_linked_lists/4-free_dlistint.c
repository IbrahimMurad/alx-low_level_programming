#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head of the list
 *
 * Return: Nothing
*/


void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (head)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
