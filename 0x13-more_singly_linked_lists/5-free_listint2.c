#include "lists.h"

/**
 * free_listint2 - sets head to NULL
 * @head: pointer to pointer variable to list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	list_free(*head);
        free(*head);
	*head = NULL;
}

/**
 * list_free - recursively free list
 * @head: pointer to list
 *
 * Return: head to list
 */
listint_t *list_free(listint_t *head)
{
        if (head->next != NULL)
        {
                free(list_free(head->next));
        }
        return(head);
}
