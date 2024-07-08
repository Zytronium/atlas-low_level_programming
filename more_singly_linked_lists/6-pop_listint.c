#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head of a list, sets the head to
 * the next node, and returns the data of the deleted node.
 *
 * @head: The head of the list
 *
 * Return: Data of the deleted node,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;

	if (head == NULL)
		return (0);

	data = head[0]->n;
	**head = *head[0]->next;

	free(head[0]->next);

	return (data);
}
