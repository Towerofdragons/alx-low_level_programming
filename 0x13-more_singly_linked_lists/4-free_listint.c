#include "lists.h"

/**
 * free_listint - free given linked list
 * @head: pointer to first node in list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	list_free(head);
	free(head);
}

/**
 * list_free - recursive function to free linked list
 * @head: pointer to first node in list
 *
 * Return: pointer to a node
 */
listint_t  *list_free(listint_t *head)
{
	if (head->next != NULL)
	{
		free(list_free(head->next));
	}
	return(head);
}
