#include "lists.h"

/**
 * main - descr
 *
 * @h: The head of the doubly linked list
 * @idx: Index of the list where the new node should be added.
 * @n: The data (node->n) to create the new node with
 *
 * Return: Pointer to the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;

	return (newNode);
}

/**
 * get_dnodeint_at_index - gets the node at the given index
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
