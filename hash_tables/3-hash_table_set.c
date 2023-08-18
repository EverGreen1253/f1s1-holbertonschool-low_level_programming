#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - check the code
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 or 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = hash_djb2((unsigned char *)key) % (ht->size);
	hash_node_t *slot;

	slot = malloc(sizeof(hash_node_t));
	slot->key = strdup(key);
	slot->value = strdup(value);

	(ht->array)[index] = slot;

	return (1);
}
