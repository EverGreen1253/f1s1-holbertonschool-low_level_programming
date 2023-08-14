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
	dlistint_t *prev = NULL;
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
	while (spot != NULL && i < idx)
	{
		prev = spot;
		spot = spot->next;
		i = i + 1;
	}

	if (i != idx)
	{
		exit(98);
		return (NULL);
	}

	printf("index is %u\n", idx);

	if (spot == NULL)
	{
		if (i == 0)
		{
			*h = node;
			node->prev = NULL;
			node->next = NULL;
		}
		else
		{
			/**
			 * end of list
			 */
			prev->next = node;
			node->prev = prev;
			node->next = NULL;
		}
	}
	else
	{
		if (i == 0)
		{
			spot->prev = node;
			node->next = spot;
			node->prev = NULL;
			*h = node;
		}
		else
		{
			spot->prev->next = node;
			node->prev = spot->prev;
			spot->prev = node;
			node->next = spot;
		}
	}

	return (node);
}

