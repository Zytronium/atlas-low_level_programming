#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: list to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;
	list_t *node = h;

	for (i = 0; node != NULL; i++)
	{
		printf("[%d] %s\n", node->len, node->str != NULL ? node->str : "(nil)");
		node = node->next;
	}
	return (i);
}
