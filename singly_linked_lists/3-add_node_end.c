#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node to the end of a list_t list
 *
 * @head: the pointer to the head of the list_t list
 * @str: string to copy into the value of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	int headIsNull = *head == NULL;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = NULL;

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	if (headIsNull)
	{
		*head = malloc(sizeof(list_t));
		head[0]->str = strdup(newNode->str);
		head[0]->len = newNode->len;
		head[0]->next = newNode->next;

		if (*head == NULL || head[0]->str == NULL)
		{
			free(newNode->str);
			free(newNode);
			free(head[0]->str);
			free(head[0]);
		}
	}
	else
		tail_node(*head)->next = newNode;

	return (newNode);
}

/**
 * tail_node - finds the last (non-NULL) node of a list
 *
 * @head: the head or starting node of the search
 *
 * Return: pointer to the last node of a list
 */
list_t *tail_node(list_t *head)
{
	if (head == NULL)
		return (NULL);

	if (head->next == NULL)
		return (head);

	return (tail_node(head->next));
}

/**
 * _strlen - Gets the length of a string.
 * @str: String to find the length of.
 * Return: The length of the string (as an unsigned int).
 */
unsigned int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
