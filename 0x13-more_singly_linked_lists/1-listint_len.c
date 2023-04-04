#include "lists.h"

/**
 * listint_t - returns the number of nodes in listint_t list
 *
 * @h: head of a list in node
 *
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while(h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
