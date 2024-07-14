#ifndef LISTS_H
#define LISTS_H

/* ↓ LIBRARIES ↓ */

#include <stdlib.h>

/* ------------------- */
/* ↓ STRUCTS AND MISC ↓ */

/**
 * struct dlistint_s - doubly linked list
 *
 * @n: integer/data
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* ------------------- */
/* ↓ FUNCTIONS ↓ */

size_t print_dlistint(const dlistint_t *h);

size_t dlistint_len(const dlistint_t *h);

dlistint_t *add_dnodeint(dlistint_t **head, const int n);

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

void free_dlistint(dlistint_t *head);

dlistint_t *free_list_helper(dlistint_t *node);

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

dlistint_t *tail_node(dlistint_t *head);

/* ------------------- */

#endif /* LISTS_H */
