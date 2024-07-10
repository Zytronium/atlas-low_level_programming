#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - counts the number of items in a doubly linked dlistint_t list
 *
 * @h: head of the doubly linked list
 *
 * Return: the number of elements in a doubly linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL) /*ends the recursion if we reach the tail node*/
		return (0);

	return (1 + dlistint_len(h->next)); /*recursively iterates through list*/
}
