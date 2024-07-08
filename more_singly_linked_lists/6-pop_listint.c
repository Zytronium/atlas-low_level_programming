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
	listint_t *new_head;

	if (*head == NULL)
		return (0);

	data = head[0]->n;
	new_head = head[0]->next;

	free(*head);
	*head = new_head;

	return (data);
}
