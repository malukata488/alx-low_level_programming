#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the elements of a list
 *
 * @h: A pointer to a head of the list.
 *
 * Return: The number of node in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num_nodes);
}
