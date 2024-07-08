#include "lists.h"
#include <stdio.h>
#include <malloc.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given index.
 *
 * @head: first node of the listint_t linked list
 * @idx: index to insert the new node at (index starts at 0)
 * @n: number to assign to the new node's data.
 *
 * Return: pointer to the new node, or NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *currentNode = *head, *tempNode;
	unsigned int i = 0;
	tempNode = malloc(sizeof(listint_t));


	while (i <= idx)
	{
		if (currentNode == NULL || currentNode->next == NULL || tempNode == NULL)
			return (NULL);

		currentNode = currentNode->next;

		if (i == idx){
			tempNode->n = n;
			printf("The new tempNode: %d", tempNode->n );
			tempNode->next = currentNode;
			printf("The new nextNode: %d", tempNode->next->n );
			currentNode = tempNode;
			currentNode->next = tempNode->next;
			printf("The new currentNode: %d", currentNode->n );
			printf("The next new currentNode: %d", currentNode->next->n );
			printf("this gets used right!");
		}
		printf("\ni: %d\n\n", i);
		print_listint(*head);
		printf("\n\n\n");

		i++;
}
	return (currentNode);
}
