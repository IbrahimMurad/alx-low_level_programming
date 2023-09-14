#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * at index index of a dlistint_t linked list
 * @head: the adress of a pointer to the first node in the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		if ((*head)->next == NULL)
			*head = NULL;
		else
		{
			*head = temp->next;
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index)
		{
			if (temp->next == NULL)
				temp->prev->next = temp->next;
			else
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
			}
			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
