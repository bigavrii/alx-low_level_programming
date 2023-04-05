#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to the head address
 *
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int set;

	if (*head == NULL){
		return 0;
	}

	temp = *head;
	set = temp->n;
	*head = temp->next;
	free(temp);

	return set;

}
