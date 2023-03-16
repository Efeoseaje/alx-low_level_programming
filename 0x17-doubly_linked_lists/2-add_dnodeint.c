#include "lists.h"

/**
* add_dnodeint - adds a new node at the
* beginning of the doubly linked list
*
* @head: pointer to the head of the linked list
* @n: element of the linked list
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = NULL;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
		newnode->next = (*head);
	(*head) = newnode;
	}
	return (newnode);
}
