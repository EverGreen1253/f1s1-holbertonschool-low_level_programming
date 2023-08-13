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
	{	/*
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = node;
		node->prev = tail;
		*/

		node->next = *head;
		(*head)->prev = node;
		*head = node;
	}

	return (node);
}
