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
	hash_node_t *table;
	hash_table_t *table_pointer;

	table_pointer = malloc(sizeof(hash_table_t *) * 1);
	table = malloc(sizeof(hash_node_t *) * size);

	table_pointer->size = size;
	table_pointer->array = &table;

	return table_pointer;
}
