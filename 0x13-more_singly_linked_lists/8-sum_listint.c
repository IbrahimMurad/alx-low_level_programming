#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: a pointer to the first node (the head)
 *
 * Return: the sum of the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	for (temp = head; temp != NULL; temp = temp->next)
	{
		sum += temp->n;
	}
	return (sum);
}
