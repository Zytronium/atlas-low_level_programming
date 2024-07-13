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
	newHead->prev = NULL; /* set newHead's prev ptr to NULL */
	newHead->next = NULL; /* set newHead's next ptr to NULL */

	if (headIsNull) /* if old head is NULL, malloc it */
	{
		*oldHead = malloc(sizeof(dlistint_t)); /* malloc old head */
		if (*oldHead == NULL) /* malloc fail check */
		{
			free(newHead); /* free everything */
			return (NULL); /* what does this look like it does? */
		}

		/* Note: oldHead is a macro for head. */
		**head = *newHead; /* clone the new node into the head */
		free(newHead); /* free new node, as it's no longer gonna be used */
		return (*head); /* return newly created head node */
	} /* ^ this is my bug cause most likely */
	else
	{
		if (oldHead[0]->next == NULL)
		{
			dlistint_t *tempNode = malloc(sizeof(dlistint_t));
			if (tempNode == NULL)
			{
				free(newHead);
				return (NULL);
			}
			oldHead[0]->prev = newHead; /*move oldHead ahead of newHead*/
			newHead->next = *oldHead; /*move newHead behind oldHead*/

			*tempNode = **oldHead; /*clone oldHead properties into tempNode*/
			**head = *newHead; /*make newHead the head*/
			/*Note: oldHead is a macro for head*/
			*newHead = *tempNode; /*clone oldHead's og properties into newHead*/

			/*BEYOND HERE, newHead IS THE OLD HEAD*/
			free(tempNode); /*delete temp helper node*/

			head[0]->next = newHead; /*set new head.nxt to point to next item*/
			/*otherwise, it points to itself. I know because I whiteboarded it*/
			newHead->prev = *head; /*same thing again but reverse*/
		}

		 /*TODO: WIP CODE; Whiteboarding it all now on campus*/
	}

	return (newHead); /*return ptr to new head*/
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
 *
 * Update2: Nevermind. It actually just starts at the tail and then prints
 * from the head after that like nothing happened, then crashes.
 */
