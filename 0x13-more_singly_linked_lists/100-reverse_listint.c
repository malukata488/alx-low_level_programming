#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of the listint_t list
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);

}
