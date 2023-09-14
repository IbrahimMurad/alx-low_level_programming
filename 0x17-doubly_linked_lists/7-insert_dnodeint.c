#include "lists.h"


/**
 * my_len - returns the number of elements in a linked dlistint_t list.
 * @h: the head of the list
 *
 * Return: the number of elements in the list
*/

size_t my_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}

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
	size_t list_len;

	if (h == NULL)
	{
		return (NULL);
	}
	list_len = my_len(*h);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (list_len == idx)
		return (add_dnodeint_end(h, n));
	else if (idx > list_len)
		return (NULL);

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	temp = *h;
	while (temp)
	{
		if (i == idx)
		{
			new_node->prev = temp->prev;
			new_node->next = temp;
			if (idx != 0)
				temp->prev->next = new_node;
			temp->prev = new_node;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
