#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head of a list, sets the next node to the head,
 * and returns the data of the deleted node
 *
 * @param head: the head of the list
 *
 * Return: data of the deleted node
 */
int pop_listint(listint_t **head)
{
	int data = head[0]->n;
	listint_t *new_head = head[0]->next;

	free(*head);
	*head = new_head;

	return (data);
}
