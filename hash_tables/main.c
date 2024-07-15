#include <stdlib.h>
#include "hash_tables.h"

/**
 * main - checks the code
 *
 * Return: EXIT_SUCCESS (0)
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	return (EXIT_SUCCESS);
}