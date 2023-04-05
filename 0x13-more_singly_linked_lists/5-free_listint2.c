#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free a listint_t list.
 * @head: A pointer to addresss of head of the listint_t list
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}

