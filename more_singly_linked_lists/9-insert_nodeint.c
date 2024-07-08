#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given index.
 *
 * @head: first node of the listint_t linked list
 * @idx: index to insert the new node at (index starts at 0)
 * @n: number to assign to the new node's data.
 *
 * Return: pointer to the new node, or NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = *head;
	unsigned int i = 0;

	while (i < idx)
	{
		if (newNode == NULL || newNode->next == NULL)
			return (NULL);

		/*
		 * note to self:
		 * probably need to create a temporary node here
		 */
		newNode = newNode->next;
		i++;
	}

	newNode->n = n;
	newNode->next = newNode->next->next;

	return (newNode);
}
