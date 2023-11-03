#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node into dlistint
 * @h: head node
 * @idx: index to insert
 * @n: data to store in dlistint
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ptr, *postptr;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	ptr = *h;
	for (i = 0; ptr != NULL; i++)
		ptr = ptr->next;
	if (i < idx)
		return (NULL);
	i = 0;
	ptr = *h;
	while (i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
	postptr = ptr->next;
	new->prev = ptr;
	ptr->next = new;
	new->next = postptr;
	postptr->prev = new;
	return (new);
}
