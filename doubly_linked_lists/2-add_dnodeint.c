#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - check the code
 * @head: pointer addr of head of list
 * @n: value to add
 *
 * Return: pointer to new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		free_list(*head);
		exit(98);
	}

	node->n = n;

	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		*head = node;
	}
	else
	{
		node->next = *head;
		(*head)->prev = node;
		*head = node;
	}

	return (node);
}

/**
 * free_list - check the code
 * @head: head of the list
 *
 * Return: nothing.
 */
void free_list(dlistint_t *head)
{
	dlistint_t *node;

	if (head != NULL)
	{
		node = head;
		if (node != NULL && node->next != NULL)
		{
			free_node(node->next);
		}
		free(head);
	}
}

/**
 * free_node - frees mem usage by the node
 * @node: node to free up
 *
 * Return: nothing.
 */
void free_node(dlistint_t *node)
{
	if (node->next != NULL)
	{
		free_node(node->next);
	}
	free(node);
}
