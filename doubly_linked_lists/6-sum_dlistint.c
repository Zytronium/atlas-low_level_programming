#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all the data (n)
 * in a dlistint_t doubly linked list.
 *
 * @head: The head of the doubly linked list
 *
 * Return: the sum of all the data in a linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *currentNode = head;

	while (currentNode != NULL)
	{
		total += currentNode->n;
		currentNode = currentNode->next;
	}

	return (total);
}
