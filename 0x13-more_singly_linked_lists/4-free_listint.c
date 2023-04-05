#include "lists.h"

void free_listint(listint_t *head)
{
	list_free(head);
	free(head);
}

listint_t  *list_free(listint_t *head)
{
	if (head->next != NULL)
	{
		free(list_free(head->next));
	}
	return(head);
}
