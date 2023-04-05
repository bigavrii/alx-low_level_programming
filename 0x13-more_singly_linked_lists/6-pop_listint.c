#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to the head address
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int set;

	if (*head == NULL){
		return (0);
	}

	temp = *head;
	set = (*head)->n;
	*head = temp->next;

	free(temp);

	return (set);
}
