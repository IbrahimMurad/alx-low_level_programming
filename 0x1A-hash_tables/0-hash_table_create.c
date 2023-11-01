#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 * Or NULL if something went wrong
*/


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned long int i;

	new_ht = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (!new_ht)
	{
		return (NULL);
	}
	new_ht->size = size;
	new_ht->array = (hash_node_t **) calloc(size, sizeof(hash_node_t *));
	if (!new_ht->array)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_ht->array[i] = NULL;
	}
	return (new_ht);
}
