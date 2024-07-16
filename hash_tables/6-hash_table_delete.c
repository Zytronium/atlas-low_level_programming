#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_t - descr
 *
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *list, *node, *prevNode;
	unsigned long int i;

	if (ht == NULL)
		return;

	list = ht->array[0];

	/* iterate over each list in array */
	for (i = 0; i <= ht->size; list = ht->array[i])
	{
		node = list;
		/* iterate over each item in each linked list in the array */
		while (node != NULL)
		{
			prevNode = node; /* this is so we can free node after we iterate */
			/* free node */
			free(node->key); /* free key */
			free(node->value); /* free value */
			node = node->next; /* iterate */
			free(prevNode); /* free node */
		}
		i++;
	}

	/* free table and array */
	free(ht->array);
	free(ht);
}
