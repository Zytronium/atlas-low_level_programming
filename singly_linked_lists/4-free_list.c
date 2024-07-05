#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t from memory
 *
 * @head: the pointer to the head of the list_t list
 */
void free_list(list_t *head)
{
	list_t *nxt;
	if (head != NULL)
	{
		nxt = head->next;
		free(head);
		free_list(nxt);
	}
}
