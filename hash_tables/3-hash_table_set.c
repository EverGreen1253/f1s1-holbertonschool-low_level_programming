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
	unsigned long int index;
	hash_node_t *slot, *temp;

	if (ht == NULL)
	{
		return (0);
	}


	index = hash_djb2((unsigned char *)key) % (ht->size);
	slot = malloc(sizeof(hash_node_t));
	slot->key = malloc(strlen(key) + 1);
	slot->value = malloc(strlen(value) + 1);
	slot->next = NULL;

	strcpy(slot->key, key);
	strcpy(slot->value, value);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = slot;
	}
	else
	{
		temp = ht->array[index];

		/* overwrite value for same key */
		if (*temp->key == *key)
		{
			ht->array[index]->value = malloc(strlen(value) + 1);
			strcpy(ht->array[index]->value, value);
		}
		else
		{
			slot->next = temp;
			ht->array[index] = slot;
		}
	}

	return (1);
}
