#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_print - Prints the contents of a hash table
 *
 * @ht: Hash table to print the contents of
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *list, *node;
	int i;

	if (ht == NULL)
		return;

	list = ht->array[0];
	node = list;

	/* iterate over ht->array */
	for (i = 0; i <= ht->size && list != NULL; list = ht->array[i])
	{
		/* iterate over each linked list in the array */
		while (node != NULL)
		{
			/* print item contents */
			/*WIP*/

			node = node->next;
		}
	}
}
