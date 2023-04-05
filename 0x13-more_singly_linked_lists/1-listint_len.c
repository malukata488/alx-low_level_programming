#include "lists.h"
#include <stdlib.h>


/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of the pointer
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

