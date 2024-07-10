#include "lists.h"
#include <stdlib.h>
#ifndef oldHead /*it's just a little less confusing this way*/
#define oldHead head
/*
 * now I can refer to the original head with this after moving it to
 * the second item in the linked list, and I won't get confused about
 * which head I'm referring to.
 */
#endif
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

	if (*head == NULL || newHead == NULL) /* head null or malloc fail check */
		return (NULL);

	/*create a new node and swap it with head (I got seg fault otherwise)*/
	newHead->n = n; /* set new head's data to the given data (n) */
	newHead->next = *oldHead; /* set new head's next ptr to old head */
	newHead->prev = NULL; /* set new head's prev ptr to null to make it the head */
	oldHead[0]->prev = newHead; /* make sure newHead prev ptr is old head */

	return (newHead); /*return ptr to new head*/
}
