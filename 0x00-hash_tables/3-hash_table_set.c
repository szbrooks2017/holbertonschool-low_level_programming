#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the skey, an not be an empty string
 * @value: is the value associated with the key, must be duplicated, can be empty
 * Return: 1 if success else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	hash_node_t *tmp = NULL;
	unsigned long int idx;

    /* hash table, key, and value can't be null */
    if (ht == NULL || key == NULL || value == NULL)
	{
        return (0);
	} 
	
	/* set id variable equal to the new key index using task 2 */
	idx = key_index((unsigned char *)key, ht->size);

	/* malloc space for new node, hash_node_t struct*/
	node = malloc(sizeof(hash_node_t));

	/* null check */
	if (node == NULL)
	{
		return (0);
	}
	
	/* set the key value pair and next pointer to new node */
	node->key = strdup(key);
	node->value = strdup(value);
	/* set temp to array index, if tmp is equal to key passed then free */
	tmp = ht->array[idx];
	if (tmp && strcmp(key, tmp->key) == 0)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}

	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}