#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	insert_dnodeint_at_index(&head, 0, 0);
	insert_dnodeint_at_index(&head, 1, 1);
	insert_dnodeint_at_index(&head, 2, 2);
	insert_dnodeint_at_index(&head, 3, 3);
	insert_dnodeint_at_index(&head, 4, 4);
	insert_dnodeint_at_index(&head, 5, 98);
	insert_dnodeint_at_index(&head, 6, 402);
	insert_dnodeint_at_index(&head, 7, 1024);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 5, 4096);
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
