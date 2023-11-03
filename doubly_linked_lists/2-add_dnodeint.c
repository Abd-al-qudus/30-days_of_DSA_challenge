#include "lists.h"

/**
 * add_dnoteint - add to a doubbly linked list
 * @head: head node
 * @n: data to store
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	new->n = n;
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
