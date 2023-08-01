#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a linked list
 * @head: Pointer to head
 * Return: Number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *present = head;
	listint_t *temp = 0;
	size_t count = 0;

	while (present != NULL)
	{
		printf("[%p] %d\n", (void *)present, present->n);
		count++;
		if (present->next >= present)
		{
			if (temp == NULL)
			{
				temp = (listint_t *)present;
				while (temp->next >= temp)
				{
					printf("[%p] %d\n", (void *)temp, temp->n);
					count++;
					temp = temp->next;
				}
			}
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			count++;
			break;
		}
		present = present->next;
	}
	return (count);
}
