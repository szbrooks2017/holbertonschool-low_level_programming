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

		while(ht->array[idx] != NULL)
		{
			tmp = ht->array[idx];
			ht->array[idx] = ht->array[idx]->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}