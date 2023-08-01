#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to a pointer to the first node
 * @idx: the index
 * @n: the data of the new element
 *
 * Return: a pointer to the new element (success)
 * NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i;

	if (head == NULL || (*head) == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	if (idx == 0)
	{
		return (new);
	}
	new->next = (new->next)->next;
	temp = *head;
	for (i = 1; new->next != NULL; temp = temp->next)
	{
		if (i == idx)
		{
			temp->next = new;
			return (new);
		}
		else
		{
			new->next = (new->next)->next;
			i++;
		}
	}
	return (NULL);
}
