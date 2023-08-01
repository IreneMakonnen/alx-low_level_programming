#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to the head pointer
 * @idx: Index of list where node is added
 * @n: Integer
 * Return: Address of new node or NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *present;
	unsigned int count;

	if (head == 0)
		return (0);

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == 0)
		return (0);

	new_node->n = n;
	new_node->next = 0;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	present = *head;
	count = 0;
	while (present != 0)
	{
		if (count == idx - 1)
		{
			new_node->next = present->next;
			present->next = new_node;
			return (new_node);
		}

		present = present->next;
		count++;
	}

	free(new_node);
	return (0);
}
