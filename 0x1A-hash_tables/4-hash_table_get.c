#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key we are looking for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *first_at_key, *temp;

	if (!(ht && key && *key) || ht->array == NULL)
	{
		return (NULL);
	}
	first_at_key = ht->array[key_index((unsigned char *) key, ht->size)];
	if (first_at_key == NULL)
	{
		return (NULL);
	}
	if (strcmp(first_at_key->key, key) == 0)
	{
		return (first_at_key->value);
	}
	temp = first_at_key;
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
