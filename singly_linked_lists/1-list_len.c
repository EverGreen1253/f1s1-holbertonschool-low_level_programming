#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code
 * @h: head of the list
 *
 * Return: number of elements.
 */
size_t print_list(const list_t *h)
{
	const list_t *curr = h;
	size_t len = 0;
	char *s;

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
