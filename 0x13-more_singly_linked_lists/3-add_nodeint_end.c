#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * @head: pointer to a pointer to the head of the list
 * @n: value to add to the new node
 *
 * Return: the address of new element/NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
