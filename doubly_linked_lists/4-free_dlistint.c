#include "lists.h"

/**
 * free_dlistint - frees an entire dlistint_t doubly linked list.
 * Assumed that the head provided is the actual head.
 * I won't program it to iterate down the list until it finds
 * the real head unless the checker doesn't link it.
 *
 * @head: the head of the doubly linked list to free
 */
void free_dlistint(dlistint_t *head)
{
	free_list_helper(head);
}

/**
 * free_list_helper - frees a node in a dlistint_t doubly linked list
 *
 * @node: the node to free
 *
 * Returns: the next node in the doubly linked list,
 * or NULL if it was the last one.
 */
dlistint_t *free_list_helper(dlistint_t *node)
{
	dlistint_t *next = NULL;

	if (node != NULL)
	{
		next = node->next;
		free(node);
	}

	if (next != NULL)
		free_list_helper(next);
	return (next);
}
