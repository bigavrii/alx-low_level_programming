#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		current->next = next;
		free(current);
		current = next;

	}
}
