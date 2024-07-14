#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the head a doubly linked list.
 *
 * @head: head node of the doubly linked list
 * @n: number/data to be assigned to the new node.
 *
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newHead = malloc(sizeof(dlistint_t)); /* malloc newHead */

	/* again, I am assuming that h is the real head of the list */
	if (newHead == NULL) /* malloc fail check */
		return (NULL); /*return null to indicate failure*/

	/*create new node at behind the current head */
	newHead->n = n; /*set newHead's data to the given data (n)*/
	newHead->next = *head; /*make newHead the actual new head & continue chain*/
	newHead->prev = NULL; /*make newHead the actual new head*/
	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t)); /* create head node if its null */
		if (*head == NULL) /* malloc fail check */
		{
			free(newHead); /*free all memory*/
			return (NULL); /*what does this look like it does*/
		}
	}
	**head = *newHead; /*swap newHead with head*/
	free(newHead); /*free newHead*/

	return (*head); /*return ptr to new head*/
}
