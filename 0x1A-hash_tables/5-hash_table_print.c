#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 *
 * Return: Nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;

	if (ht == NULL || ht->array == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if ((ht->array)[i] != NULL)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			i++;
			break;
		}
	}
	for (; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		}
	}
	printf("}\n");
}
