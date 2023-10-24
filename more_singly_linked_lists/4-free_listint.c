#include "lists.h"

/**
 * free_listint - free the linked list
 * @head: head node of the linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
