#include "lists.h"

/**
 * free_listint_safe - Frees a linked list witj a loop
 * @h: pointer to head pointer
 * Return: Size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *present = *h;
	listint_t *next_node, *temp;

	while (present != 0)
	{
		next_node = present->next;
		present->next = 0;

		if (next_node <= present)
		{
			while (*h != 0 && *h != next_node)
			{
				temp = *h;
				*h = (*h)->next;
				free(temp);
				count++;
			}
			break;
		}
		present = next_node;
	}
	return (count);
}
