#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t from memory
 *
 * @head: the pointer to the head of the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *nxt;

	if (head != NULL)
	{
		nxt = head->next;
		free(head);
		free_listint(nxt);
	}
}
