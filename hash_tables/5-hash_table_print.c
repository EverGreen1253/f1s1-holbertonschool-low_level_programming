#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - check the code
 * @ht: the table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;
	int printed = 0;

	if (ht == NULL)
	{
		exit (98);
	}

	printf("{");

	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (printed == 1)
			{
				printf(", ");
				printed = 0;
			}

			printf("'%s': '%s'", temp->key, temp->value);
			printed = 1;

			temp = temp->next;
		}
		i = i + 1;
	}

	printf("}\n");
}
