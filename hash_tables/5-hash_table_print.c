#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_print - Prints the contents of a hash table
 *
 * @ht: Hash table to print the contents of
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *list, *node;
	int i, lastElmnt = 0;

	if (ht == NULL)
		return;

	list = ht->array[0];

	putchar('{');
	/* iterate over ht->array */
	for (i = 0; i <= ht->size; list = ht->array[i])
	{
		node = list;
		/* iterate over each linked list in the array */
		while (node != NULL)
		{
			/*
			 * TODO: add variable to determine if this s the last item
			 *  in the array
			 */

			/* print item contents */
			printf("'%s': '%s'%s", node->key, node->value,
				   (!lastElmnt) ? ", " : ""); /* add commas where needed */

			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
