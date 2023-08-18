#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - check the code
 * @key: is the key
 * @size: size of the array of the hash table
 *
 * Return: index in the table to chuck the value for the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* you only have a limited number of slots to play with */

	unsigned long int h = hash_djb2((unsigned char *)key);
	unsigned long int index = h % size;

	return (index);
}
