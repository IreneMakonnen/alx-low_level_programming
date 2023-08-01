#include "lists.h"

/**
 * add_nodeint - Adds a new node at beginning of linked list
 * @head: Pointer to pointer of the ead
 * @n: Integer
 * Return: NULL if fails or new element's address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == 0)
		return (0);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
