#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - finds value associated with
 * the given key in the given hash table
 *
 * @ht: hash table to search in to get the value
 * @key: key string associated with the value you are looking for
 *
 * Return: value associated with the element,
 * or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *check;

	/* null check on hash table and key */
	if (ht == NULL || key == NULL)
		return (NULL);
	/* get the index associated with the given key */
	index = key_index((const unsigned char *) key, ht->size);
	/* iterate through the linked list at the right idx */
	check = ht->array[index];
	while (check != NULL)
	{
		/* return the value at this node if the key matches */
		if ((strcmp(check->key, key) == 0))
			return (check->value);
		/* iterate to the next node in the list */
		check = check->next;
	}
	/* if not found, return NULL */
	return (NULL);
}
