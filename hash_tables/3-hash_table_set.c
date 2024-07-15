#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_set -  adds an element to the hash table
 *
 * @ht: hash table you want to add or update the key/value to
 * @key: non-empty key string
 * @value: value associated with the key
 *
 * Return: 1 on success, 0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newElement;

	/* check if key is empty or NULL + malloc fail check */
	if (key == NULL || key[0] == '\0')
		return (0);

	newElement = malloc(sizeof(hash_node_t));
	if (newElement == NULL)
		return (0);

	/* get index for new element */
	index = key_index((const unsigned char *) key, ht->size);

	/* initialize new element */
	newElement->next = NULL; /* what is this even for? It's in an array, not linked list */
	newElement->key = (char *) key;
	newElement->value = (char *) value;

	/* handle collisions */
	while (ht->array[index] == NULL)
		index++;

	ht->array[index] = newElement;

	return (1);
}
