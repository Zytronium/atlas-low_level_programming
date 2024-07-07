#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked listint_t list
 *
 * @h: list provided
 *
 * Return: number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	int len;

	for (len = 0; node != NULL; len++)
	{
		node = node->next;
	}

	return (len);
}
