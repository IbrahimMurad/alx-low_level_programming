#include "hash_tables.h"


/**
 * free_list - frees a linked list of hash_node_t list
 * @h: a pointer to a pointer to the first node.
 *
 * Return: Nothing
*/

void free_list(hash_node_t **h)
{
	hash_node_t *temp;

	temp = *h;
	while (temp)
	{
		*h = temp->next;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = *h;
	}
}

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 *
 * Return: Nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free_list(&(ht->array[i]));
		}
	}
	free(ht->array);
	free(ht);
}
