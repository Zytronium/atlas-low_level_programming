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
	hash_table_set(ht, "Betty formatting", "nightmare");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "Rick", "Never Gonna Give You Up!");
	hash_table_set(ht, "main.c", "#include <stdio.h>\n"
								 "#include <stdlib.h>\n"
								 "#include \"hash_tables.h\"\n"
								 "\n"
								 "/**\n"
								 " * main - checks the code\n"
								 " *\n"
								 " * Return: EXIT_SUCCESS (0)\n"
								 " */\n"
								 "int main(void)\n"
								 "{\n"
								 "\thash_table_t *ht;\n"
								 "\n"
								 "\tht = hash_table_create(1024);\n"
								 "\thash_table_print(ht);\n"
								 "\thash_table_set(ht, \"c\", \"fun\");\n"
								 "\thash_table_set(ht, \"python\", \"awesome\");\n"
								 "\thash_table_set(ht, \"Steve\", \"Pixel Guy\");\n"
								 "\thash_table_set(ht, \"Bob\", \"and Kris love asm\");\n"
								 "\thash_table_set(ht, \"Rick\", \"Pickle\");\n"
								 "\thash_table_set(ht, \"N\", \"queens\");\n"
								 "\thash_table_set(ht, \"Jack\", \"pumpkin lantern\");\n"
								 "\thash_table_set(ht, \"Asterix\", \"Obelix\");\n"
								 "\thash_table_set(ht, \"obamna\", \"SODA!\");\n"
								 "\thash_table_set(ht, \"hash\", \"Table.\");\n"
								 "\thash_table_set(ht, \"Betty formatting\", \"nightmare\");\n"
								 "\thash_table_set(ht, \"98\", \"Battery Street\");\n"
								 "\thash_table_set(ht, \"Rick\", \"Never Gonna Give You Up!\");\n"
								 "\thash_table_set(ht, \"main.c\", \"C O D E C E P T I O N\\n\");\n"
								 "\thash_table_print(ht);\n"
								 "\n"
								 "\treturn (EXIT_SUCCESS);\n"
								 "}\n");
	hash_table_print(ht);

	return (EXIT_SUCCESS);
}
