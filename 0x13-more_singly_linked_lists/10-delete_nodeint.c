#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list
 * @head: Pointer to head pointer
 * @index: Index of node to be deleted
 * Return: 1 (success) or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *present;
	unsigned int count;

	if (head == 0 || *head == 0)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	present = *head;
	count = 0;
	while (present != 0)
	{
		if (count == index - 1)
		{
			temp = present->next;
			if (temp != 0)
			{
				present->next = temp->next;
				free(temp);
				return (1);
			}
			return (-1);
		}
		present = present->next;
		count++;
	}
	return (-1);
}
