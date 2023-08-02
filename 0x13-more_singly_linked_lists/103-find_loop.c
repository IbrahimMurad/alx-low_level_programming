#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: a pointer to the first node in the list
 *
 * Return: a pointer to the node where the loop starts
 * Or NULL if no loops in the list
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	fast = head;
	slow = head;
	while (fast && slow && slow->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
