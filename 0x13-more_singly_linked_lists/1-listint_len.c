#include "lists.h"

/**
 * listint_len - Function returns number of elements in linked list
 * @h: Pointer to the head
 * Return: Number of elemnts in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != 0)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
