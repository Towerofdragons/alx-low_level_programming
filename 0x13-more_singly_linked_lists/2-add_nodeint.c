#include "lists.h"

/**
 * add_nodeint -add node at beginnning of the list
 * @head: pointer to headnode of list
 * @n: value for new node
 *
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = *head;

	*head = malloc(sizeof(listint_t));

	if (*head == NULL)
		return (NULL);

	(*head)->n = n;
	(*head)->next = temp;

	return (*head);
}
