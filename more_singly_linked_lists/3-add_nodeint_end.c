#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node to the end of a listint_t list
 *
 * @head: the pointer to the head of the list_t list
 * @n: int to copy into the value of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	return (*head);
}

/**
 * tail_node_int - finds the last (non-NULL) node of a list
 *
 * @head: the head or starting node of the search
 *
 * Return: pointer to the last node of a list
 */
listint_t *tail_node_int(listint_t *head)
{
	if (head == NULL)
		return (NULL);

	if (head->next == NULL)
		return (head);

	return (tail_node_int(head->next));
}