#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the head a doubly linked list.
 *
 * @head: head node of the doubly linked list
 * @n: number/data to be assigned to the new node.
 *
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	/* again, I am assuming that h is the real head of the list */
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	head[0]->prev = newNode;

	return (newNode);
}
