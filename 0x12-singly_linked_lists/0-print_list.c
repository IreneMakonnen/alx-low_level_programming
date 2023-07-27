#include "lists.h"

/**
 * print_list - Prints all elements of a sturcture list
 * @h: Pointer to head of linked list to print
 * Return: Number of nodes, [0] (nil) if str = NULL
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != 0)
	{
		if (h->str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		node_count++;
	}

	return (node_count);
}
