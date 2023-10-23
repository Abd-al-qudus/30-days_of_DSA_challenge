#include "lists.h"

/**
 * print_list - print the content of a singly linked list
 * @h: head of the list
 * Return: the numbers of node in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t n;

	n = 0;
	ptr = h;
	if (ptr == NULL)
		return (n);
	while (ptr != NULL)
	{
		if (!(ptr->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		n++;
		ptr = ptr->next;
	}
	return (n);
}
