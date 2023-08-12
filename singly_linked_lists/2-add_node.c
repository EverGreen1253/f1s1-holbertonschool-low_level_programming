#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - check the code
 * @head: pointer to the address of the head of the list
 * @str: the string to add to the new node
 *
 * Return: pointer to list item.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i = i + 1;
	}

	/*
	 * printf("Size of %s - %d\n", str, i);
	 */

	new->str = strdup(str);
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}
