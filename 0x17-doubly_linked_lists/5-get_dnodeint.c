#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of doubly linked list
 * @head: pointer to head node
 * @index: node index to be returned
 * Return: node on success, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next;
	}
	return (temp);
}
