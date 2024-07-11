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
		*oldHead = malloc(sizeof(dlistint_t)); /* malloc old head */
		if (*oldHead == NULL) /* malloc fail check */
		{
			free(newHead); /* free everything */
			return (NULL); /* what does this look like */
		}
		/* Note: oldHead is a macro for head. */
		**head = *newHead; /* clone the new node into the head */
		free(newHead); /* free new node, as it's no longer gonna be used */
		return (*head); /* return newly created head node */
	}
	else
	{
		newHead->prev = *oldHead; /* set newHead's prev ptr to NULL to make it head */
		newHead->next = oldHead[0]->next; /* set new head's next ptr to old head's old next ptr to continue the chain */
		oldHead[0]->next = newHead; /* set old head's next to new head */
	}

	/*
	 * Note: I just had a moment of clarity. I think know what's happening now!
	 * The reason it starts at 0 and ends with the last node when printing is
	 * because when the head is not null, it sets the previous node to the new
	 * node's value, overwriting it.
	 *
	 * Update: this is the exact same print list bug I've been debugging for
	 * a couple days on a personal project... It starts printing at the item
	 * right before the head, and in this case, stops right before the tail.
	 */

	return (newHead); /*return ptr to new head*/
}
