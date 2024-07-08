#include "lists.h"
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

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
	listint_t *currentNode = *head, *tempNode;
	unsigned int i = 1;
	
	tempNode = malloc(sizeof(listint_t));

	if (tempNode == NULL)
		return (NULL);

	if (idx == 0)
	{
		*tempNode = _add_nodeint(head, n);
		return (tempNode);
	}

	while (i <= idx)
	{
		if (i < idx)
		{
			if (currentNode->next == NULL)
				return (NULL);

			currentNode = currentNode->next;
		}
		
		if (i == idx)
		{
			tempNode->n = n;
			tempNode->next = currentNode->next;
			currentNode->next = tempNode;
		}

		i++;
	}

	return (tempNode);
}

/**
 * _add_nodeint - adds a new node to the beginning of a listint_t list
 *
 * @head: the pointer to the head of the listint_t list
 * @n: integer to copy into the value of the new node
 *
 * Return: The new node.
 */
listint_t _add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode, *temp;
	int headIsNull = *head == NULL;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		exit(-1);

	if (!headIsNull)
	{
		temp->n = head[0]->n;
		temp->next = head[0]->next;
	}
	else
	{
		temp->n = 0;
		temp->next = NULL;
	}

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		free(temp);
		exit(-1);
	}

	newNode->n = n;
	newNode->next = temp;

	if (headIsNull)
		*head = malloc(sizeof(listint_t));

	head[0]->n = newNode->n;
	head[0]->next = !headIsNull ? newNode->next : NULL;

	return (*newNode);
}
