#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - locates a given node of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 *
 * Return: If the node does not exist - NULL
 *        Else - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_count = 0;

	while (head && node_count < index)
	{
		head = head->next;

		node_count++;
	}
	return (head && node_count == index ? head : NULL);
}

