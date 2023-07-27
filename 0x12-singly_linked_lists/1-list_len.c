#include "lists.h"

/**
 * list_len - Returns The number of elements in linked list
 * @h: Pointer to the head of list
 * Return: Number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t ele_count = 0;

	while (h != 0)
	{
		h = h->next;
		ele_count++;
	}

	return (ele_count);
}
