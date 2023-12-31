#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code
 * @h: head of the list
 *
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	const list_t *curr = h;
	size_t len = 0;

	if (h != NULL)
	{
		while (curr != NULL)
		{
			len = len + 1;
			curr = curr->next;
		}
	}

	return (len);
}
