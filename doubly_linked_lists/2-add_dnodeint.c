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

	if (newHead == NULL) /* malloc fail check */
		return (NULL);

	if (*head == NULL) /* debug print */
		printf("head is null\t"); /* debug results: head is ALWAYS null */

	newHead->n = n; /* set new head's data to the given data (n) */
	newHead->prev = NULL; /* set newHead's prev ptr to old head */
	newHead->next = *oldHead ? oldHead[0]->next : NULL; /* set new head's next prt to old head's old next ptr if it wasn't null, else null */

	if (*oldHead != NULL) /* if old head isn't NULL */
		oldHead[0]->next = newHead; /* set old head's next to new head */
	else
	{
		*oldHead = malloc(sizeof(dlistint_t));
		newHead->next = NULL;
		**oldHead = *newHead;
		free(newHead);
		return (*oldHead);
	}

	return (newHead); /*return ptr to new head*/
}
