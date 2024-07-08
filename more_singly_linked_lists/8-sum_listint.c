#include "lists.h"

/**
 * sum_listint - calculates the sum of a list of ints
 *
 * @head: first node of the listint_t linked list
 *
 * Return: sum of the list of ints
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
