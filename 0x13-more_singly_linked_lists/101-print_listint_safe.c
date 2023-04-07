#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

size_t loop_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Count the number of unique
 * nodes in a looped listint_t linked.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not loop - 0.
 *        Else - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *zebra, *lion;
	size_t nodes = 0;

	if (head == NULL)
		return (0);

	zebra = lion = head;


			do {
				zebra = zebra->next;

				if (lion->next != NULL)
				{
					lion = lion->next->next;
				}
				else
				{
					return (0);
				}

				nodes++;
			} while (lion != NULL && zebra != NULL && lion != zebra);

			if (lion == NULL || zebra == NULL)
			{
				return (0);
			}

			return (nodes);
}
/**
 * print_listint_safe - prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *current = head;
	size_t loop_length = looped_listint_len(head);
	int printed = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL && (!printed || nodes < loop_length))
	{
		printf("[%p] %d\n", (void *)current, current->n);

		if (current == current->next && !printed)
		{
			printed = 1;
		}

		current = current->next;
		nodes++;
	}

	if (printed)
	{
		printf("-> [%p] %d\n", (void *)current, current->n);
	}

	return (nodes);
}



