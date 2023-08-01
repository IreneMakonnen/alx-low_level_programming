#include "lists.h"

/**
 * find_listint_loop - Function finds the loop in linked list
 * @head: Pointer to the head
 * Return: Address of node where loop starts or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == 0 || head->next == 0)
		return (0);

	tortoise = head->next;
	hare = head->next->next;
	while (hare != 0 && hare->next != 0)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
		tortoise = tortoise->next;
		hare = hare->next->next;
	}
	return (0);
}
