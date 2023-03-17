#include "lists.h"

/**
 * sum_dlistint - returns sum of all data (n) of doubly linked list
 * @head: head node
 * Return: 0 if empty else sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != 0)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
