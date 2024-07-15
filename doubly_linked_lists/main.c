#include <stdio.h>
#include "lists.h"

/**
 * main - checks the code
 *
 * Return: Always EXIT_SUCCESS (0).
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 0, 4096);
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}