#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: Pointer to the head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *present;

	while (*head != 0)
	{
		present = *head;
		*head = (*head)->next;
		free(present);
	}
}
