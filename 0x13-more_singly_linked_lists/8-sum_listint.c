#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the head
 *
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{

	int sum = 0;
	int i;

	for (i =0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}

	return sum;
}
