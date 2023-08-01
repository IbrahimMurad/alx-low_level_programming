#include "lists.h"

/**
 * free_listint_safe - safely frees a listint_t list
 * @h: a pointer to a pointer to the first node of the list
 *
 * Return: Nothing
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	temp = *h;
	while (temp)
	{
		*h = (*h)->next;
		if (temp <= *h)
		{
			*h = temp - 2;
			free(temp);
			count++;
			while (*h)
			{
				temp = *h;
				*h = (*h)->next;
				free(temp);
				count++;
			}
			return (count);
		}
		free(temp);
		count++;
		temp = *h;
	}
	return (count);
}
