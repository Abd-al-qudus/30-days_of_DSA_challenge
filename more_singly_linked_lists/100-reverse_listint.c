#include "lists.h"

/**
 * reverse_listint - reverse a singly linked list
 * @head: head node
 * Return: pointer to the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
