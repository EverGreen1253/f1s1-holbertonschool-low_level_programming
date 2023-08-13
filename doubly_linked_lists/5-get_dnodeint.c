#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - check the code
 * @head: head of the list
 * @index: the index we want
 *
 * Return: pointer to the wanted node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr;

	if (head != NULL)
	{
		curr = head;
		while (curr != NULL && i < index)
		{
			curr = curr->next;
			i = i + 1;
		}

		if (curr == NULL)
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}

	return (curr);
}
