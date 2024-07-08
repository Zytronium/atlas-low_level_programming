#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index -deletes the node at
 * the given index of a listint_t linked list.
 *
 * @head: the head of the listin_t linked list
 * @index: the index of the node to be deleted
 *
 * Return: 1 on sucess; -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode = *head, *temp;
	unsigned int i = 1;

	if  (*head == NULL || (index != 0 && head[0]->next == NULL))
		return (-1);	

	if (index == 0)
	{
		temp = head[0];
		*head = head[0]->next;

		free(temp);
	}

	while (i <= index)
	{
		if (currentNode->next == NULL)
			return (-1);

		if (i < index)
			currentNode = currentNode->next;

		if (i == index)
		{
			if (currentNode->next->next == NULL)
				return (-1);

			temp = currentNode->next;
			currentNode->next = currentNode->next->next;
			
			free(temp);

			if (currentNode == NULL)
				return (-1);
		}

		i++;
	}

	return (1);
}
