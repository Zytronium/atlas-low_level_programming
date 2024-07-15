#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * main - prints itself
 *
 * Return: EXIT_SUCCESS (0)
 */
int main(void) {
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
								 " * main - prints itself\n"
								 " *\n"
								 " * Return: EXIT_SUCCESS (0)\n"
								 " */\n"
								 "int main(void) {\n"
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
								 "\thash_table_set(ht, \"main.c\", \"#include <stdio.h>\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"#include <stdlib.h>\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"#include \\\"hash_tables.h\\\"\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"/**\\n\"\n"
								 "\t\t\t\t\t\t\t\t \" * main - prints itself\\n\"\n"
								 "\t\t\t\t\t\t\t\t \" *\\n\"\n"
								 "\t\t\t\t\t\t\t\t \" * Return: EXIT_SUCCESS (0)\\n\"\n"
								 "\t\t\t\t\t\t\t\t \" */\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"int main(void) {\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\thash_table_t *ht;\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\tht = hash_table_create(1024);\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\thash_table_print(ht);\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\thash_table_set(ht, \\\"c\\\", \\\"fun\\\");\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\thash_table_set(ht, \\\"python\\\", \\\"awesome\\\");\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\thash_table_set(ht, \\\"Steve\\\", \\\"Pixel Guy\\\");\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\thash_table_set(ht, \\\"Bob\\\", \\\"and Kris love asm\\\");\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\thash_table_set(ht, \\\"Rick\\\", \\\"Pickle\\\");\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\thash_table_set(ht, \\\"N\\\", \\\"queens\\\");\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\thash_table_set(ht, \\\"Jack\\\", \\\"pumpkin lantern\\\");\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\thash_table_set(ht, \\\"Asterix\\\", \\\"Obelix\\\");\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\thash_table_set(ht, \\\"obamna\\\", \\\"SODA!\\\");\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\thash_table_set(ht, \\\"hash\\\", \\\"Table.\\\");\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\thash_table_set(ht, \\\"Betty formatting\\\", \\\"nightmare\\\");\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\thash_table_set(ht, \\\"98\\\", \\\"Battery Street\\\");\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\thash_table_set(ht, \\\"Rick\\\", \\\"Never Gonna Give You Up!\\\");\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\thash_table_set(ht, \\\"main.c\\\", \\\"c  o  d  e  c  e  p  t  i  o  n\\\");\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\tprintf(\\\"%s\\\", hash_table_get(ht, \\\"main.c\\\"));\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"\\treturn (EXIT_SUCCESS);\\n\"\n"
								 "\t\t\t\t\t\t\t\t \"}\");\n"
								 "\n"
								 "\tprintf(\"%s\", hash_table_get(ht, \"main.c\"));\n"
								 "\n"
								 "\treturn (EXIT_SUCCESS);\n"
								 "}");

	printf("%s", hash_table_get(ht, "main.c"));

	return (EXIT_SUCCESS);
}