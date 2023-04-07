#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safety.
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *tmp;

	if (h == NULL || *h == NULL)
		return (count);

	current = *h;

	while (current != NULL)
	{
		count++;
		if (current->next)
		{
			*h = NULL;
		free(current);
		break;
		}
		tmp = current;
		current = current->next;
		free(tmp);
	}

*h = NULL;

return (count);
}
