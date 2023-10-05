#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key (can not be empty)
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long index_of_key;

	if (!(ht && key && *key))
		return (0);

	new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);

	if (value == NULL)
		new_node->value = NULL;
	else
		new_node->value = strdup(value);

	new_node->next = NULL;
	index_of_key = key_index((unsigned char *) key, ht->size);
	if (ht->array[index_of_key] == NULL)
	{
		ht->array[index_of_key] = new_node;
	}
	else
	{
		new_node->next = ht->array[index_of_key];
		ht->array[index_of_key] = new_node;
	}
	return (1);
}
