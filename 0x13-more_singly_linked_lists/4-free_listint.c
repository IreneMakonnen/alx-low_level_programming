#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: Pointer to head
 */
void free_listint(listint_t *head)
{
	listint_t *present;

	while (head != 0)
	{
		present = head;
		head = head->next;
		free(present);
	}
}
