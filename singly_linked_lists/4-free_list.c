#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - check the code
 * @head: head of the list
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *node;

	if (head != NULL)
	{
		node = head;
		if (node != NULL && node->next != NULL)
		{
			free_node(node->next);
		}
		head->next = NULL;
		free(head->str);
		free(head);
	}
}

/**
 * free_node - frees the mem usage by a linked list node
 * @node: the node to be freed up
 *
 * Return: nothing
 */
void free_node(list_t *node)
{
	if (node->next != NULL)
	{
		free_node(node->next);
	}
	node->next = NULL;
	free(node->str);
	free(node);
}
