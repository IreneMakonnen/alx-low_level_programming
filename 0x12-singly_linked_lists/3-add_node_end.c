#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds new node at the end of list
 * @head: Pointer to pointer to head of node
 * @str: String to be duplicated
 * Return: Address of new node or NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *present;

	if (str == 0)
		return (0);

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == 0)
		return (0);

	new_node->str = strdup(str);
	if (new_node->str == 0)
	{
		free(new_node);
		return (0);
	}

	new_node->len = strlen(str);
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
