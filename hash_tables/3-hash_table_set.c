#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

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
	hash_node_t *newElement, *collidedElement = NULL;

	/* check if key is empty or NULL */
	if (key == NULL || key[0] == '\0')
		return (0);

	/* malloc newElement + malloc fail check */
	newElement = malloc(sizeof(hash_node_t));
	if (newElement == NULL)
		return (0);

	/* get index for new element */
	index = key_index((const unsigned char *) key, ht->size);

	/* initialize new element */
	newElement->next = NULL;
	newElement->key = (char *) key;
	newElement->value = strdup(value);

	/* handle collisions */
	if (ht->array[index] == NULL)
	{
		collidedElement = ht->array[index];
		/* iterate until theres no collision */
		while (collidedElement->next != NULL)
			collidedElement = collidedElement->next;
		/* when this loop is over, collidedElement will be the tail node */

		/* add element to the end of the linked list at this idx*/
		collidedElement->next = newElement;
	}
	else /* place the element in the array at the correct index */
		ht->array[index] = newElement;

	return (1);
}
