#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the
 * given index of a listint_t linked list.
 *
 * @head: the first node of the listint_t linked list (index 0)
 * @index: the index of the node to return
 *
 * Return: the nth node in the listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;
	listint_t *node = head;

	if (node == NULL)
		return (NULL);

	for (i = 0; i != index; i++)
	{
		if (node->next != NULL)
			node = node->next;
		else
			return (NULL);
	}

	return (node);
}
