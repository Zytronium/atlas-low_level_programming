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
	hash_node_t *node, *nextNode;
	unsigned long int i;

	if (ht == NULL)
		return;

	/* iterate over each list in array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		/* iterate over each item in each linked list in the array */
		while (node)
		{
			nextNode = node; /* iterate */
			node = node->next; /* so we can free node after we iterate */
			/* free node */
			free(nextNode->key); /* free key */
			free(nextNode->value); /* free value */
			free(nextNode); /* free node */
		}
	}

	/* free table and array */
	free(ht->array);
	free(ht);
}
