#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code
 * @h: pointer addr of head of list
 * @idx: index to take over
 * @n: value for the new node
 *
 * Return: pointer to new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *spot;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		free_list(*h);
		exit(98);
	}

	node->n = n;

	spot = *h;
	while (spot != NULL && spot->next != NULL && i < idx)
	{
		spot = spot->next;
		i = i + 1;
	}

	if (i != idx)
	{
		return (NULL);
	}

	if (spot == NULL)
	{
		printf("01\n");
		*h = node;
		node->prev = NULL;
		node->next = NULL;
	}
	else
	{
		printf("02\n");
		spot->prev->next = node;
		node->prev = spot->prev;
		spot->prev = node;
		node->next = spot;
	}

	return (node);
}

