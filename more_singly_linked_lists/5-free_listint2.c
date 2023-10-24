#include "lists.h"

/**
 * free_listint2 - free the linked list and set the head to null
 * @head: head node of the linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
