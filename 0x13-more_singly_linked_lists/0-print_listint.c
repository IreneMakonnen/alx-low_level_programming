#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a linked list
 * @h: Pointer to the head
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != 0)
	{
		printf("%d", h->n);
		printf("\n");
		h = h->next;
		node_count++;
	}

	return (node_count);
}
