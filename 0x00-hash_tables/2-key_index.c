#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - function that gives the index of the key
 * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: the index at which the key/pair should be
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
