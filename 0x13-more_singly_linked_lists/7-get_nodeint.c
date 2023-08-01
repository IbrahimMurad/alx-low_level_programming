#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the first node (the head)
 * @index: the index
 *
 * Return: a pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0, temp = head; temp != NULL; temp = temp->next)
	{
		if (index == i)
		{
			return (temp);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
