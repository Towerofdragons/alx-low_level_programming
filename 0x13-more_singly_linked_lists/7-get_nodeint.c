#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: pointer to head node
 * @index: node to be selected starting from 0
 *
 * Return: address to nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	i = 0;
	while (i < index)
	{
		if (head->next == NULL)
			return(NULL);

		head = head->next;
		i++;
	}

	return(head);
}
