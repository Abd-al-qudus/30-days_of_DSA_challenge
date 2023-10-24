#include "lists.h"

/**
 * add_nodeint - add a node to the beginning of the linked list
 * @head: head of the linked list
 * @n: data to add
 * Return: address to the new element added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
