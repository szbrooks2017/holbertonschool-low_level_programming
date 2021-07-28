#include "hash_tables.h"
/* create a hash table */


/**
 * hash_table_create - Creates a hash table
 * @size: is the size of the array
 * Return: returns a pointer to the newly constructed table
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	/* declare hash table variable */
	hash_table_t *table = NULL;

	/* check for empty table */
	if (size == 0)
		return (NULL);

	/* malloc size of table */
	table = malloc(sizeof(hash_table_t));

	/* check for empty list */
	if (table == NULL)
		return (NULL);

	/* set size of our table equal to size passed */
	table->size = size;

	/* malloc space for the array */
	table->array = malloc(sizeof(hash_node_t *) * size);

	/* null check */
	if (table->array == NULL)
		return (NULL);

	return (table);
}
