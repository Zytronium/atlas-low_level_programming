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
	if (head == NULL)
	{
		free(NULL);
		exit(0);
	}

	if (*head != NULL)
	{
		free_listint2(&head[0]->next);
		free(*head);
		*head = NULL;
	}
}
