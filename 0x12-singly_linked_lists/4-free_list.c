#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list
 * @head: Pointer to head of list
 */
void free_list(list_t *head)
{
	list_t *present;

	while (head != 0)
	{
		present = head;
		head = head->next;
		free(present->str);
		free(present);
	}
}
