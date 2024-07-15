#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at the given index
 * of a dlistint_t doubly linked list.
 *
 * @head: The head of the doubly linked list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = get_dnodeint_at_index(*head, index);

	/* check if node exists (includes if head is null) */
	if (node == NULL)
		return (-1); /* indicate failure */

	/* set new head to next node if this node is the current head */
	if (node->prev == NULL)
		*head = node->next;

	/* set previous node's next ptr to point to the next node (to skip this) */
	if (node->prev != NULL)
		node->prev->next = node->next;

	/* set next node's prev ptr to point to the last node (to skip this one) */
	if (node->next != NULL)
		node->next->prev = node->prev;

	/* delete this node */
	free(node);

	return (1); /* indicate success */
}

/**
 * get_dnodeint_at_index - gets the node at the given index.
 * Unless you have over 2 billion nodes somehow, feeding "-1" into this
 * should return NULL, not because index of -1 doesnt exist, but because
 * -1 as an unsigned int is 2 billion something, which shouldn't exist either.
 *
 * @head: the head of the doubly linked list
 * @index: index of the list to find the node at
 *
 * Return: the node at the given index, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = head;

	while (i < index)
	{
		if (node == NULL)
			return (NULL);

		node = node->next;
		i++;
	}

	return (node);
}
