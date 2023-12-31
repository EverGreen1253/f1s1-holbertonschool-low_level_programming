#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - check the code
 * @head: pointer addr of head of list
 * @index: index to take over
 *
 * Return: pointer to new node.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *spot;
	unsigned int i = 0;

	spot = *head;
	while (spot != NULL && i < index)
	{
		spot = spot->next;
		i = i + 1;
	}

	if (i != index || spot == NULL)
		return (-1);

	if (i == 0)
	{
		if (spot->next != NULL)
		{
			*head = spot->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
	}
	else
	{
		if (spot->next != NULL)
		{
			spot->prev->next = spot->next;
			spot->next->prev = spot->prev;
		}
		else
			spot->prev->next = NULL;
	}
	free(spot);

	return (1);
}

