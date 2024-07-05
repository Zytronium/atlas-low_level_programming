#include <stdlib.h>
#include "lists.h"
#include "2-add_node.c"
#include "0-print_list.c"
#include "_putchar.c"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t node1 = {"World", 5, NULL};
	list_t *head;

	head = NULL;
	add_node(&head, "Alexandro");
	add_node(&head, "Asaia");
	add_node(&head, "Augustin");
	add_node(&head, "Bennett");
	add_node(&head, "Bilal");
	add_node(&head, "Chandler");
	add_node(&head, "Damian");
	add_node(&head, "Daniel");
	add_node(&head, "Dora");
	add_node(&head, "Electra");
	add_node(&head, "Gloria");
	add_node(&head, "Joe");
	add_node(&head, "John");
	add_node(&head, "John");
	add_node(&head, "Josquin");
	add_node(&head, "Kris");
	add_node(&head, "Marine");
	add_node(&head, "Mason");
	add_node(&head, "Praylin");
	add_node(&head, "Rick");
	add_node(&head, "Rick");
	add_node(&head, "Rona");
	add_node(&head, "Siphan");
	add_node(&head, "Sravanthi");
	add_node(&head, "Steven");
	add_node(&head, "Tasneem");
	add_node(&head, "William");
	add_node(&head, "Zee");
	_putchar(':');
	_putchar(')');
	_putchar('\n');
	print_list(head);
	_putchar('(');
	_putchar(':');
	_putchar('\n');
	return (0);
}