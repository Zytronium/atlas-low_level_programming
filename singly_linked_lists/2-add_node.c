#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node to the beginning of a list_t list
 *
 * @head: the pointer to the head of the list_t list
 * @str: string to copy into the value of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp;
	int headIsNull = *head == NULL;

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	if (!headIsNull)
	{
		temp->str = strdup(head[0]->str);
		temp->len = head[0]->len;
		temp->next = head[0]->next;
	}
	else
	{
		temp->str = NULL;
		temp->len = 0;
		temp->next = NULL;
	}
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(temp->str);
		free(temp);
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = temp;
	if (headIsNull)
		*head = malloc(sizeof(list_t));

	head[0]->str = strdup(newNode->str);
	head[0]->len = newNode->len;
	head[0]->next = !headIsNull ? newNode->next : NULL;
	return (newNode);
}

/**
 * _strlen - Gets the length of a string.
 * @str: string to find the length of.
 * @return the length of the string (as an unsigned int).
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
