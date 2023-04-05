#include "lists.h"

/**
 * sum_listint - sums all int values in nodes
 * @head: pointer to head node
 *
 * Return: sum of all nodes
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	if (head == NULL)
		return (0);
	current = head;
	sum = 0;
	while (1)
	{
		sum += current->n;
		if (current->next == NULL)
			break;

		current = current->next;
	}
	return (sum);
}
