#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * int sum_dlistint - check the code
 * @head: head of the list
 *
 * Return: sum of num in all nodes.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	const dlistint_t *curr;

	if (head != NULL)
	{
		curr = head;
		while (curr != NULL)
		{
			sum = sum + curr->n;
			curr = curr->next;
		}
	}

	return (sum);
}
