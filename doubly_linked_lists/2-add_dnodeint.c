#include "lists.h"

/**
 * add_dnodeint - adds a new node at the head a doubly linked list.
 * This assumes that head is correctly set as the true head of the list.
 * It technically just adds a new node right before the node provided, "head."
 *
 * @head: head node of the doubly linked list
 * @n: number/data to be assigned to the new node.
 *
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newHead = malloc(sizeof(dlistint_t)); /* malloc newHead */

	if (newHead == NULL) /* malloc fail check */
		return (NULL); /* return null to indicate failure */

	/* create new node behind the current head */
	newHead->n = n; /* set newHead's data to the given data (n) */
	newHead->next = *head; /*make newHead the actual new head & continue chain*/
	newHead->prev = NULL; /* make newHead the actual new head */

	newHead->prev = *head; /* set the head's prev ptr */
	*head = newHead; /* swap newHead with head */

	return (*head); /* return ptr new head */
}
