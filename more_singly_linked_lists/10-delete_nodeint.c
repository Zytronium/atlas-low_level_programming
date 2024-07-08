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
	listint_t *currentNode = *head;
	unsigned int i = 1;

	if  (*head == NULL || (index != 0 && head[0]->next == NULL))
		return (-1);	

	if (index == 0)
	{
		*head = head[0]->next;
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

		currentNode->next = currentNode->next->next;
		}

		i++;
	}

	return (1);
}

/**
 * add_nodeint - adds a new node to the beginning of a listint_t list
 *
 * @head: the pointer to the head of the listint_t list
 * @n: integer to copy into the value of the new node
 *
 * Return: address of the new node, or NULL if it failed
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
