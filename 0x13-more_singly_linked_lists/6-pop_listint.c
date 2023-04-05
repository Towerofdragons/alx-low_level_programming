#include "lists.h"

/**
 * pop_listint - remove first node from list
 * @head: pointer to pointer variable holding head
 *
 * Return: value in first node; 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = temp;
	return (value);
}
