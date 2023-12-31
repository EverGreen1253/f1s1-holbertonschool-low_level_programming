#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - check the code
 * @head: head of the list
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (head != NULL)
	{
		node = head;
		if (node != NULL && node->next != NULL)
		{
			free_node_alt(node->next);
		}
		free(head);
	}
}

/**
 * free_node_alt - frees mem usage by the node
 * @node: node to free up
 *
 * Return: nothing.
 */
void free_node_alt(dlistint_t *node)
{
	if (node->next != NULL)
	{
		free_node_alt(node->next);
	}
	free(node);
}
