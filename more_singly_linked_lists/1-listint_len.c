#include "lists.h"

/**
 * listint_len - get the length of a linked list
 * @h: head of the linked lsit
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n;
	const listint_t *ptr;

	ptr = h;
	n = 0;
	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}
