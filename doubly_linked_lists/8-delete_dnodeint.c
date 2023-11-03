#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node in dlistint
 * @h: head node
 * @idx: index to insert
 * @n: data to store in dlistint
 * Return: new node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *node;
	unsigned int i;

	ptr = *head;
	if (ptr == NULL)
		return (-1);
	for (i = 0; ptr != NULL; i++)
		ptr = ptr->next;
	if (i < index)
		return (-1);
	i = 0;
	ptr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}
	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	node = ptr;
	ptr->prev->next = ptr->next;
	ptr->next->prev = ptr->prev;
	free(node);
	return (1);
}
