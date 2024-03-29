#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of the listint_t list.
 * @head: A pointer to address of the head of the listint_t list
 * @n: the integer of the new node to contain.
 *
 * Return: If the function fails - NULL.
 *        Else - the addresss of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);

}
