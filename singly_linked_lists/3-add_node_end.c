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
 list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp;

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));

	temp->str = strdup(head[0]->str);
	temp->len = head[0]->len;
	temp->next = head[0]->next;

	newNode = malloc(sizeof(list_t));

	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = temp;

	return (newNode);
}

/**
 * _strlen Gets the length of a string.
 * @str: string to find the length of.
 * @return the length of the string (as an unsigned int).
 */
unsigned int _strlen(const char * str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
