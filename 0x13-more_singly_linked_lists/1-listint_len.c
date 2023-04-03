#include "lists.h"

/**
 * listint_len - finds the number of elements in linked list
 * @h: pointer to linked list head
 *
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	count = 0;
	while (1)
	{
		if (h != NULL)
		{
			h = h->next;
			count++;
		}
		else
			break;
	}
	return (count);
}
