#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: the address of a pointer to the first node
 * @idx: the index at which the new node will be added
 * @n: the value stored in the new node
 *
 * Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int i = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*h == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	temp = *h;
	while (temp && (i < idx))
	{
		temp = temp->next;
		i++;
	}
	if (i < idx)
		return (NULL);
	new_node->prev = temp->prev;
	temp->prev->next = new_node;
	new_node->next = temp;
	temp->prev = new_node;
	return (new_node);
}
