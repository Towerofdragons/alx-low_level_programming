#include "lists.h"

/**
 * print_list - prints elements of a list
 * @h: pointer to first node
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	int count;
	count = 0;

	if (h == NULL)
		return (0);

	while (1)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		if (h->next == NULL)
			break;
		h = h->next;
	}

	return (count);
}
