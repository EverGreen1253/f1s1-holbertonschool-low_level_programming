#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - check the code
 * @ht: hash table
 * @key: key to look for
 * 
 * Return: Value of Key or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *slot;

	if (ht == NULL)
	{
		return (0);
	}

	index = hash_djb2((unsigned char *)key) % (ht->size);

	slot = ht->array[index];

	if (slot == NULL)
	{
		return (NULL);
	}

	return (slot->value);
}
