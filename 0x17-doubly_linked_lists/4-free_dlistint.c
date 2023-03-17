#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: double pointer to head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(temp);
	}
}
