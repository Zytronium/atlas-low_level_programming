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
	hash_table_print(ht);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Steve", "Pixel Guy");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "Rick", "Pickle");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Jack", "pumpkin lantern");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "obamna", "SODA!");
	hash_table_set(ht, "hash", "Table.");
	hash_table_print(ht);

	return (EXIT_SUCCESS);
}
