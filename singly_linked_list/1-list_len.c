#include "lists.h"

/**
 * list_len - count the length of a singly linked list
 * @h: head of the list
 * Return: the numbers of node in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t n;

	n = 0;
	ptr = h;
	if (ptr == NULL)
		return (n);
	while (ptr)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}
