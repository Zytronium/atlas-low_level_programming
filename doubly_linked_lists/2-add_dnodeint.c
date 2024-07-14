#include "lists.h"

#ifndef safeMallocList
#define safeMallocList(what) what = malloc(sizeof(dlistint_t)); \
if (what == NULL)                                               \
{                                                               \
free(newHead);                                                  \
return (NULL);                                                  \
}
#endif

#ifndef freeAndReturn
#define freeAndReturn(fr, ret) free(fr); /*delete temp helper node*/ \
return (ret)/*return ptr to new head*/

#endif

/**
 * add_dnodeint - adds a new node at the head a doubly linked list.
 * This assumes that head is correctly set as the true head of the list.
 * It technically just adds a new node right before the node provided, "head."
 *
 * @head: head node of the doubly linked list
 * @n: number/data to be assigned to the new node.
 *
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newHead = malloc(sizeof(dlistint_t)), *tempNode; /* create newHead */
	int headIsNull = *head == NULL;

	if (newHead == NULL) /* malloc fail check */
		return (NULL);
	newHead->n = n; /* set new head's data to the given data (n) */
	newHead->prev = NULL; /* set newHead's prev ptr to NULL */
	newHead->next = NULL; /* set newHead's next ptr to NULL */
	if (headIsNull) /* if head is NULL, malloc it */
	{
		safeMallocList(*head)/*don't need ; because its a macro ending with }*/
		**head = *newHead; /* clone the new node into the head */
		freeAndReturn (newHead, *head);/*free unused node,& return ptr to head*/
	}
	safeMallocList(tempNode) /*create temp node*/
	if (head[0]->next == NULL) /*this would only ever be the 2nd node*/
	{
		head[0]->prev = newHead; /*move head ahead of newHead*/
		newHead->next = *head; /*move newHead behind head*/
		*tempNode = **head; /*clone head properties into tempNode*/
		**head = *newHead; /*make newHead the new head*/
		*newHead = *tempNode; /*clone head's og properties into newHead*/
		/*BEYOND HERE, newHead IS THE OLD HEAD*/
		head[0]->next = newHead;/*set new head.nxt to point to next item*/
		newHead->prev = *head; /*same thing again but reverse*/
		freeAndReturn(tempNode, *head);
	} /*else: */
	*tempNode = **head;/*Clone head into temp*/
	**head = *newHead;/*Clone newHead into head*/
	*newHead = *tempNode->next;/*Clone *temp->next into newHead*/
	*tempNode->next = *tempNode;/*Clone temp into *temp->next*/
	head[0]->next = tempNode->next;/*Set head->next to pnt to temp->next*/
	head[0]->next->next = newHead;/*Set head->next->next to pnt to newHead*/
	newHead->prev = head[0]->next->next;/*Set newHead->prev to pnt to head->next(->next?)*/
	head[0]->next->prev = *head;/*Set head->next->prev to pnt to head*/
	freeAndReturn(tempNode, *head);
}
/* check my jpeg in this dir for white boarding that may help explain */
