#include "lists.h"
#include <stdio.h>


/**
 * print_listint_safe - prints all the elements of a listint_t list
 * Also, it handles the loops if it exist.
 * @head: a pointer to the first node in the list (the head)
 *
 * Return: Nothing
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0, once = 0;
	const listint_t *temp, *fast, *slow;

	fast = head;
	slow = head;
	while (fast && slow && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (fast != slow)
			{
				slow = slow->next;
				fast = fast->next;
			}
			break;
		}
	}
	temp = head;
	while (temp)
	{
		if (once == 1 && temp == fast)
		{
			printf("-> [%p] %d\n", (void *) temp, temp->n);
			return (count);
		}
		printf("[%p] %d\n", (void *) temp, temp->n);
		count++;
		if (temp == fast)
		{
			once++;
		}
		temp = temp->next;
	}
	return (count);
}
