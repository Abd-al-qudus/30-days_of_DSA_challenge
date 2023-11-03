#include "lists.h"

/**
 * sum_dlistint - sum the data of a doubly linked list
 * @head: head of the list
 * Return: n or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int n;
	dlistint_t *ptr;

	n = 0;
	ptr = head;
	if (ptr == NULL)
		return (n);
	while (ptr != NULL)
	{
		n += ptr->n;
		ptr = ptr->next;
	}
	return (n);
}
