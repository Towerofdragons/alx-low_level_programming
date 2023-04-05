#include "lists.h"

/**
 * add_nodeint_end - add node to end of list
 * @head:pointer to pointer variable head
 * @n: value for new node
 *
 * Return: pointer to head of list;
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);


	if (*head == NULL)
	{
		(*head) = malloc(sizeof(listint_t));
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}

	temp = *head;
	while (1)
	{
		if (temp->next == NULL)
		{
			new_node = malloc(sizeof(listint_t));
			new_node->n = n;
			new_node->next = NULL;
			temp->next = new_node;
			break;
		}
		else
			temp = temp->next;

	}
	return (*head);


}
