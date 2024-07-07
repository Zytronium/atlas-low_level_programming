#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 *
 * @h: list to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	int i = 0;

	while (node != NULL)
	{
		printf("%d\n",  node->n);
		node = node->next;
		i++;
	}

	return (i);
}
