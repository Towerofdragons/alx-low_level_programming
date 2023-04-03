#include "lists.h"

/**
 * add_node - add new node at beginning of list_t list
 * @head: pointer to head node
 * @str: string added to new node
 *
 * Return: head pointer to list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head == NULL)
		return (NULL);

	temp = *head;

	*head = malloc(sizeof(list_t));

	if (head == NULL)
		return (NULL);

	(*head)->str = strdup(str);
	(*head)->len = strlen(str);
	(*head)->next = temp;

	return (*head);
}
