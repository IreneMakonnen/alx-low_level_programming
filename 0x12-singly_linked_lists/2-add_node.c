#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds new node at beginning of linked list
 * @head: Pointer to pointer to head of linked list
 * @str: String to be duplicaed
 * Return: Address of new element or NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
