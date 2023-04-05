#include "lists.h"
#include <stdlib.h>

/**
 * add-nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: A pointers to address of head of listint_t list
 * @n: integer for the new node to contain
 *
 * Return: If the function fails - NULL
 *        Else - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
