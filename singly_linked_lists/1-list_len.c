#include "lists.h"

/**
 * list_len - list_len counts the number of elements in a linked list_t list
 *
 * @h: list provided
 *
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	int i;
	const list_t *node = h;

	for (i = 0; node != NULL; i++)
	{
		node = node->next;
	}
	return (i);
}
