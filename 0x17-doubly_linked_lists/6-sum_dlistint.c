#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 * (n) of a dlistint_t linked list
 * @head: the head of the list
 *
 * Return: the sum of all the data or 0 if the list is empty
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
