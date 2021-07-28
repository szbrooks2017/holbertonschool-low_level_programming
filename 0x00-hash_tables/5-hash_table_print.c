#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: is the hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
    /*  print the key value in the order they appear */
	unsigned long int i;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		while (tmp != NULL)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
