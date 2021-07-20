#include "hash_tables.h"
/* create a hash table */

/**
 * hash_table_create - Creates a hash table
 * @size: is the size of the array
 * Return: returns a pointer to the newly constructed table
 **/
hash_table_t *hash_table_create(unsigned long int size);
{
    hash_table_t *table = NULL;
    /* malloc size of table */
    table = malloc(sizeof(hash_table_t));
    /* check for empty list */
    if (!table)
        return (NULL);
    /* malloc linked list */
    array = malloc(sizeof(hash_node_t * ) * size);
    /* make a new pointer? */


}