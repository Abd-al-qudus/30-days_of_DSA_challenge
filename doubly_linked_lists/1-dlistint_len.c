#include "lists.h"

/**
 * dlistint_len - get the length of a list
 * @h: head node pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;
	const dlistint_t *ptr;

	if (h == NULL)
		return (98);
	ptr = h;
	n = 0;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		n++;
	}
	return (n);
}
