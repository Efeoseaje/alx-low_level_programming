#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the
* beginning of the doubly linked list
*
* @head: pointer to the head of the linked list
* @n: element of the linked list
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;
	
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newnode;
	newnode->prev = temp;

	return (newnode);

	free(temp);
}
