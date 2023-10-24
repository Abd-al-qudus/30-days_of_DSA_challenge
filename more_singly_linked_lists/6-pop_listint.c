#include "lists.h"

/**
 * pop_listint - delete the head node of the list
 * @head: the head of the list
 * Return: the popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int setter, data;

	setter = 0;
	if (*head == NULL)
		return (0);
	while (setter == 0)
	{
		ptr = *head;
		data = (*head)->n;
		*head = (*head)->next;
		free(ptr);
		setter++;
	}
	return (data);
}
