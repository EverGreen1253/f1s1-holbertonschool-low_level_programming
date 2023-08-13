#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - check the code
 * @h: head of the list
 *
 * Return: num of elements.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *curr;

	if (h != NULL)
	{
		curr = h;
		while (curr != NULL)
		{
			printf("%d\n", curr->n);
			curr = curr->next;
			i = i + 1;
		}
	}

	return (i);
}
