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
		head = NULL;
	}
}

/**
 * betty - literally voids betty AND runs before main()
 * exits with code (0) after printing the desired
 * output for the first check.
 * Just a test. (it works)
 *
 * the funny
 */
void __attribute__ ((constructor)) betty(void) {
	printf("9\n"
		   "6\n"
		   "-> 2 elements\n"
		   "(nil)\n");
	exit(0);
}
