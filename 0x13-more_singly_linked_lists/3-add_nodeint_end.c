#include "lists.h"

/**
 * add_nodeint_end - Adds new node at end of linked list
 * @head: Pointer to the head pointer
 * @n: Integer
 * Return: NULL if fails, Address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *present;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == 0)
		return (0);

	new_node->n = n;
	new_node->next = 0;

	if (*head == 0)
		*head = new_node;
	else
	{
		present = *head;
		while (present->next != 0)
			present = present->next;
		present->next = new_node;
	}

	return (new_node);
}
