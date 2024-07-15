#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a new empty hash_table_t hash table
 *
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table, or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashTable = malloc(sizeof(hash_table_t));
	int i = 0;

	/* malloc fail check */
	if (newHashTable == NULL)
		return (NULL);

	/* init newHashTable */
	newHashTable->size = size;
	newHashTable->array = malloc(sizeof(hash_node_t **) * size);

	/* malloc fail check */
	if (newHashTable->array == NULL)
	{
		free(newHashTable);
		return (NULL);
	}

	/* initialize the hash table elements to null */
	while (i <= size)
	{
		newHashTable->array[i] = NULL;
		i++;
	}

	/* return pointer to new hash table if nothing fails */
	return (newHashTable);
}
