#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at the given index,
 * right before the node that already exists at that index.
 * Note: May not work if head is null or index is tail node.
 *
 * @h: The head of the doubly linked list
 * @idx: Index of the list where the new node should be added.
 * @n: The data (node->n) to create the new node with
 *
 * Return: Pointer to the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *nodeBeforeIndex = get_dnodeint_at_index(*head, idx - 1); /*node right before this node*/
	dlistint_t *nodeAtIndex = get_dnodeint_at_index(*head, idx); /*existing node at given index*/
	dlistint_t *newNode = malloc(sizeof(dlistint_t)); /* new node to add */
	int nodeIsTail = (nodeBeforeIndex != NULL && nodeAtIndex == NULL);
	int listIsEmpty = *head == NULL;

	/* malloc fail check, plus check if given index is out of bounds */
	if (newNode == NULL || (!nodeAtIndex && !nodeIsTail && !listIsEmpty))
		return (NULL); /* return null to indicate failure */

	/* initialize new node at the given index with the given data (n) */
	newNode->n = n; /* set data */
	newNode->next = nodeAtIndex; /* place newNode before the existing node */
	/* place newNode before existing node */
	if (nodeIsTail) /* if index is at the tail */
		newNode->prev = nodeBeforeIndex;
	else if (listIsEmpty) /* if list is empty */
		newNode->prev = NULL;
	else /* if list is not empty & index is not at the tail, */
		newNode->prev = (nodeAtIndex->prev) ? nodeAtIndex->prev : NULL;

	if (newNode->prev != NULL) /* if newNode is not the head, aka idx != 0, */
		newNode->prev->next = newNode; /* update nxt ptr of the prv node */
	else /* else, if nodeAtIndex/newNode is the head, */
		*head = newNode; /* update list head to point to this */

	if (!nodeIsTail && !listIsEmpty)
		nodeAtIndex->prev = newNode;/*place the node previously here after newNode*/

	return (newNode);
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
