#include "lists.h"

/**
 * sum_listint - sum all the data of the linked list
 * @head: the first node of the list
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	sum = 0;
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
