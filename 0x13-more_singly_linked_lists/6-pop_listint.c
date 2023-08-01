#include "lists.h"

/**
 * pop_listint - Deletes head node of a linked list
 * @head: Pointer to the head pointer
 * Return: Head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *present;
	int data;

	if (*head == 0)
		return (0);

	present = *head;
	data = present->n;
	*head = present->next;
	free(present);

	return (data);
}
