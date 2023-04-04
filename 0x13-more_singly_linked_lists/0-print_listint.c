#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t list
 * @h: pointer to the listint_t head
 *
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{

	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}

	return (node);
}
