#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to the head pointer
 * Return: Pointer ti the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = 0;
	listint_t *present;

	while (*head)
	{
		present = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = present;
	}

	*head = before;

	return (before);
}
