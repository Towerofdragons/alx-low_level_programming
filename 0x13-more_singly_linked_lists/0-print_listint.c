#include "lists.h"

/**
 * print_listint - print all elements of a linked list
 * @h: pointer to list head node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	if (h == NULL)
		return (0);
	while (1)
	{
		printf("%i\n", h->n);
		count++;
		if (h->next == NULL)
		{
			break;
		}
		else
			h = h->next;

	}

	return (count);
}
