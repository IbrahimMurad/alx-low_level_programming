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
<<<<<<< HEAD
	long int dif;
=======
	long long int dif;
>>>>>>> b3204501d0136193987de28a9f7281b5ea54fcee

	if (h == NULL)
	{
		return (0);
	}
	temp = *h;
	dif = temp - temp->next;
	while (temp)
	{
		*h = (*h)->next;
		if (temp <= *h)
		{
<<<<<<< HEAD
			*h = temp - dif;
=======
			*h = (temp - dif);
>>>>>>> b3204501d0136193987de28a9f7281b5ea54fcee
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
