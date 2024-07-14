#include "lists.h"

/**
 * add_dnodeint_end - descr
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

	/*---------EVERYTHING BELOW IS COPIED FROM LAST TASK----------*/
					/*---------WIP CODE---------*/

	/* create new node at the end of the list */
	newNode->n = n; /* set newNode's data to the given data (n) */
	newNode->prev = tailNode; /* place newNode at the end of the list */
	newNode->next = NULL; /* make newNode the new tail */

	if (*head != NULL)
	{
		tailNode->prev = newNode; /* set the head's prev ptr */
		/* TODO: maybe create temp node to swap tailNode with newNode?*/
//		*tailNode = *newNode;
	}
	else
		*head = newNode; /* swap newNode with head if this is the 1st node */

	return (newNode); /* return ptr new head */
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
