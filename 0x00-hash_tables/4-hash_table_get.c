#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: returns the value at the element or null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    /* declare a new node variable */
	unsigned long int idx = 0;
	hash_node_t *tmp = NULL;

    /* if key == NULL, return NULL */
	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	/* set id variable equal to the new key index using task 2 */
	idx = key_index((unsigned char *)key, ht->size);

    /* set temp to array index*/
	tmp = ht->array[idx];
	if (tmp == NULL)
	{
		return (NULL);
	}

    /* while loop: iterate through hash table starting at the beginning */
	while (strcmp(key, tmp->key) != 0)
	{
		tmp = tmp->next;
	}

    /* return if the comparison is true */
	return (tmp->value);
}
