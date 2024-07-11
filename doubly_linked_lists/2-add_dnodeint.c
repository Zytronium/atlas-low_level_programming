#include "lists.h"
#include <stdio.h>
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
	dlistint_t *newHead = malloc(sizeof(dlistint_t)); /* create newHead */
	int headIsNull = *head == NULL;

	if (newHead == NULL) /* malloc fail check */
		return (NULL);

	newHead->n = n; /* set new head's data to the given data (n) */
	newHead->prev = *oldHead; /* set newHead's prev ptr to old head */

	if (headIsNull) /* if old head is NULL, malloc it */
	{
		*oldHead = malloc(sizeof(dlistint_t));
		**oldHead = *newHead;
		free(newHead);
		return (*oldHead);
	}
	else
	{
		oldHead[0]->next = newHead; /* set old head's next to new head */
		newHead->prev = *oldHead; /* set newHead's prev ptr to NULL to make it head */
		newHead->next = oldHead[0]->next ? oldHead[0]->next->next : NULL; /* set new head's next ptr to old head's old next ptr to continue the chain */
	}

	return (newHead); /*return ptr to new head*/
}
