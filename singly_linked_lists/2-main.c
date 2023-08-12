#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node(&head, "Daniel");
	add_node(&head, "Josquin");
	add_node(&head, "Tasneem");
	add_node(&head, "Zee");
	print_list(head);
	return (0);
}
