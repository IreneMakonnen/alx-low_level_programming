#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: Pointer to the head
 * @index: Index of the node
 * Return: nth node of list or NULL if nonexistent
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *present = head;
	unsigned int node_count = 0;

	while (present != 0)
	{
		if (node_count == index)
			return (present);

		present = present->next;
		node_count++;
	}

	return (0);
}
