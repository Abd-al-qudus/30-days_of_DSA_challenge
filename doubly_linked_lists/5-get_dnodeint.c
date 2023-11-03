#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head of the list
 * @index: index of the list
 * Return: the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int n;

	node = head;
	for (n = 0; node != NULL; n++)
		node = node->next;
	if (n < index)
		return (NULL);
	for (n = 0, node = head; n < index; n++)
		node = node->next;
	return (node);
}
