#include "lists.h"
#include <stdlib.h>

int pop_listint(listint_t **head)
{
    int data = head[0]->n;
    listint_t *new_head = head[0]->next;

    free(*head);
    *head = new_head;
    
    return (data);
}
