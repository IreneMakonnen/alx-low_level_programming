#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of linked list
 * @head: Pointer to the head
 * Return: 0 if enpty or Sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *present = head;

	while (present != 0)
	{
		sum += present->n;
		present = present->next;
	}

	return (sum);
}
