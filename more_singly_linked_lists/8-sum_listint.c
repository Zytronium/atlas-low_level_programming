#include "lists.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * @param1: descr.
 *
 * Return: 0
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
