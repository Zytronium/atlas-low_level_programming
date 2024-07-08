#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees a listint_t list from memory
 *
 * @head: the first node of listint_t list
 */
void free_listint2(listint_t **head)
{
	if (*head != NULL)
		head = NULL;
}
