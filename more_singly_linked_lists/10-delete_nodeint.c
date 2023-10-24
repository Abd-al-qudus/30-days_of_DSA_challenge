#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at the index given
 * @head: the start node
 * @index: index to delete node
 * Return: the node or NULL if node doesnt exist
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *pre, *node;
	unsigned int i, check;

	ptr = *head;
	i = 0, check = 1;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
		check = 0;
	}
	if (i < index)
		return (-1);
	i = 0;
	if (check != index)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (i < index - 1)
	{
		ptr = ptr->next;
		i++;
	}
	pre = ptr;
	node = ptr->next;
	pre->next = ptr->next->next;
	free(node);
	return (1);
}

