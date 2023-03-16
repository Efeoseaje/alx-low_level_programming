#include "lists.h"
/**
 * dlistint_len - returns the number of elements in
 * a doubly linked list
 * @h: pointer to the head of the list
 * Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
