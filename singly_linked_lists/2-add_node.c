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
	list_t *temp;

	temp = malloc(sizeof(list_t));
	*temp = (list_t) {.str = strdup(str), .len = strlen(str), .next = *head};

	if (str == NULL)
		return (NULL);

	return (temp);
}
