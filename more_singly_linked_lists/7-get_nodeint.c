#include "lists.h"

/**
 * get_nodeint_at_index - get the node at the index given
 * @head: the start node
 * @index: index to get node
 * Return: the node or NULL if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;
	i = 0;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (i < index)
		return (NULL);
	i = 0;
	ptr = head;
	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
