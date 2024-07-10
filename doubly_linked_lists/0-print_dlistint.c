#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a doubly linked dlistint_t list
 *
 * @h: head of doubly linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodeCount = 0; /*number of nodes found and printed*/

	/* I'm gonna assume that h is in fact the head, so I won't check if h.prev
	 * is NULL or not. However, if it's not NULL, we could iterate backwards
	 * until we find NULL, and then start iterating up again. */
	while (h != NULL) /*iterate until the tail, which is null*/
	{
		printf("%d\n", h->n); /*print the element's number*/
		nodeCount++; /*keep track of the number of nodes printed*/
		h = h->next; /*iterate to the next node in the list*/
	}

	return (nodeCount); /*what does it look like (return number of nodes)*/
}
