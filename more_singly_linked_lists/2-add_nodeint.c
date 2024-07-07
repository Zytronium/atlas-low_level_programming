#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node to the beginning of a listint_t list
 *
 * @head: the pointer to the head of the listint_t list
 * @n: integer to copy into the value of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode, *temp;
	int headIsNull = *head == NULL;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

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
		return (NULL);
	}

	newNode->n = n;
	newNode->next = temp;

	if (headIsNull)
		*head = malloc(sizeof(listint_t));

	head[0]->n = newNode->n;
	head[0]->next = !headIsNull ? newNode->next : NULL;

	return (newNode);
}

/**
 * _strlen - Gets the length of a string.
 * @str: string to find the length of.
 * Return: the length of the string (as an unsigned int).
 */
unsigned int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
