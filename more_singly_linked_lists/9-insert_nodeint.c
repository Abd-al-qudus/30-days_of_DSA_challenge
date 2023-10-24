#include "lists.h"

/**
 * insert_nodeint_at_index - get the node at the index given
 * @head: the start node
 * @idx: index to get node
 * @n: data to store
 * Return: the node or NULL if node doesnt exist
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *pre, *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	ptr = *head;
	i = 0;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (i < idx)
		return (NULL);
	i = 0;
	ptr = *head;
	while (i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
	pre = ptr;
	ptr = ptr->next;
	pre->next = new;
	new->next = ptr;
	return (new);
}

