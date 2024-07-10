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
	dlistint_t *tempNode = malloc(sizeof(dlistint_t)); /* malloc tempNode */

	/* again, I am assuming that h is the real head of the list */
	if (tempNode == NULL || *head == NULL) /* malloc fail check */
		return (NULL);

	/*create a new node and swap it with head (I got seg fault otherwise)*/
	*tempNode = **head; /* clone head node into tempNode. */
	head[0]->n = n; /* set head's data to the given data (n) */
	head[0]->next = tempNode; /* set head's next ptr to tempNode */
	head[0]->prev = NULL; /* set head's prev ptr to null */
	tempNode->prev = *head; /*make sure old head (tempNode) prev ptr is new head*/

	return (*head); /*return ptr to new head*/
}
