#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - check the code for
 * @size: the size
 *
 * Return: the hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *node_array;
	hash_table_t *table;

	/* printf("sizeof hash_table_t - %lu\n", sizeof(hash_table_t)); */
	/* printf("sizeof hash_node_t - %lu\n", sizeof(hash_node_t *)); */

	table = malloc(sizeof(hash_table_t) * 1);
	node_array = malloc(sizeof(hash_node_t *) * size);

	if (table == NULL || node_array == NULL)
	{
		free(table);
		free(node_array);
		exit(98);
	}

	table->size = size;
	table->array = &node_array;

	return (table);
}
