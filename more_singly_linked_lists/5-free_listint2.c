#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list from memory
 *
 * @head: the first node of listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *nxt;

	if (*head != NULL)
	{
		nxt = head[0]->next;
		free(head);
		free_listint2(&nxt);
	}
}
