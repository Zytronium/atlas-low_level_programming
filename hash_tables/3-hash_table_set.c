#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
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
	hash_node_t *newElement, *check;

	/* check if key is empty/NULL or ht is NULL */
	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	/* malloc newElement + malloc fail check */
	newElement = malloc(sizeof(hash_node_t));
	if (newElement == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	/* initialize new element */
	newElement->next = NULL;
	newElement->key = strdup(key);
	newElement->value = strdup(value);

	/* handle collisions */
	check = ht->array[index];
	if (check != NULL)
	{
		while (check != NULL)
		{
			if ((strcmp(check->key, key) == 0))
			{
				check->value = strdup(value);
				free(newElement);
				break;
			}
			check = check->next;
		}
		if (check == NULL || strcmp(check->key, key) != 0)
			add_node_at_head(&ht->array[index], newElement);
	}
	else /* place the element in the array at the correct index */
		ht->array[index] = newElement;

	return (1);
}

/**
 * add_node_at_head - adds a new node to the beginning of a linked list
 *
 * @head: the pointer to the head of the list
 * @node: node to add
 *
 * Return: address of the new node, or NULL if it failed
 */
hash_node_t *add_node_at_head(hash_node_t **head, hash_node_t *node)
{
	hash_node_t *newNode;
	hash_node_t *temp;
	int headIsNull = *head == NULL;

	if (node == NULL)
		return (NULL);

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (NULL);

	if (!headIsNull)
	{
		*temp = **head;
	}
	else
	{
		temp->key = NULL;
		temp->value = NULL;
		temp->next = NULL;
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(temp->key);
		free(temp->value);
		free(temp);
		free(newNode);
		return (NULL);
	}

	newNode = node;
	newNode->next = temp;
	*head = newNode;

	return (newNode);
}
