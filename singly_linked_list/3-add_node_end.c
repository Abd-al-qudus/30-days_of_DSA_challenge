#include "lists.h"

/**
 * add_node_end - add a node to the end of the list
 * @head: head of the linked list
 * @str: data of the linked list
 * Return: address of the new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
	return (new);
}
