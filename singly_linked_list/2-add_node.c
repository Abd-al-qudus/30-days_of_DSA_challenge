#include "lists.h"

/**
 * add_node - add a node to the beginning of the list
 * @head: head of the linked list
 * @str: data of the linked list
 * Return: address of the new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	if (head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
