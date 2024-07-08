#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - checks the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = pop_listint(NULL);
	printf("- %d\n", n);
	print_listint(NULL);
	n = pop_listint(NULL);
	printf("- %d\n", n);
	print_listint(NULL);
	free_listint2(NULL);
	printf("%p\n", NULL);
	return (0);
}
