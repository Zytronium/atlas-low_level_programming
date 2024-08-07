#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the tail of a doubly linked list
 *
 * @head: head node of the doubly linked list
 * @n: number/data to be assigned to the new node.
 *
 * Return: pointer to the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t)); /*malloc'ed new node ptr*/
	dlistint_t *tailNode = tail_node(*head); /* pointer to the last node */

	if (newNode == NULL) /* malloc fail check */
		return (NULL); /* return null to indicate failure */

	/* create new node at the end of the list */
	newNode->n = n; /* set newNode's data to the given data (n) */
	newNode->prev = tailNode; /* place newNode at the end of the list */
	newNode->next = NULL; /* make newNode new tail by setting nxt ptr to NULL */

	if (*head != NULL)
		tailNode->next = newNode; /* set the tail's prev ptr to new node */
	else
		*head = newNode; /* swap newNode with head if this is the 1st node */

	return (newNode); /* return ptr to new node */
}

/**
 * tail_node - finds the last node of a list
 *
 * @head: the head or starting node of the search
 *
 * Return: pointer to the last node of a list
 */
dlistint_t *tail_node(dlistint_t *head)
{
	if (head == NULL || head->next == NULL)
		return (head);

	return (tail_node(head->next));
}
