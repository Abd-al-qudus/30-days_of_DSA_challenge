#include "lists.h"

/**
 * free_dlistint - free doubly linked list
 * @head: head node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		if (head != NULL)
			head->prev = NULL;
		free(ptr);
	}
}
