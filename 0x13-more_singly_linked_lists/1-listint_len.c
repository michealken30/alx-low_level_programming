#include "lists.h"

/**
 * listint_len -This returns the number of nodes in a linked lists
 * @h: The linked list type to be traverse
 *
 * Return: number of nodes
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
