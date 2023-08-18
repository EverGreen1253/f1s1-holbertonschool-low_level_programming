#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - check the code
 * @ht: the table
 *
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
	{
		exit(98);
	}

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next != NULL)
			{
				del_list(ht->array[i]->next);
			}

			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
		}

		i = i + 1;
	}

	free(ht);
}

void del_list(hash_node_t *node)
{
	if (node->next != NULL)
	{
		del_list(node->next);
	}

	if (node != NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
	}
}
