#include "lists.h"

/**
 * get_nodeint_at_index - returns the sum of all the data (n) of a listint_t linked list.
 * @head: a pointer to the head of the listint_t list
 * @index: the index of the node, starting at 0
 *
 * Return: if the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	node = 0;
	while (node < index){
		if (head == NULL)
			return (NULL);

		head = head->next;
		node++;
	}

	return (head);
}
