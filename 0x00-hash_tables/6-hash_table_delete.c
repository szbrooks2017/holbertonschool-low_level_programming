#include "hash_tables.h"

/**
 * hash_table_delete - frees the hash table
 * @ht: is the hashtable.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int idx;

	if (ht == NULL)
	{
		return;
	}

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			while (ht->array[idx] != NULL)
			{
				tmp = ht->array[idx]->next;
				free(ht->array[idx]->key);
				free(ht->array[idx]->value);
				free(ht->array[idx]);
				ht->array[idx] = tmp;
			}
			free(ht->array[idx]);
		}
	}
	free(ht->array);
	free(ht);
}
