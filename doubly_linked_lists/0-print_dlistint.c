#include "lists.h"

/**
 * print_dlistint - print doubly linked list content
 * @h: head node pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;
	const dlistint_t *ptr;

	if (h == NULL)
		return (98);
	ptr = h;
	n = 0;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n++;
	}
	return (n);
}
