#include "hash_tables.h"

/**
 * hash_djb2 - gets the hash value of a key using the djb2 algorithm.
 *
 * Copy-Pasted and edited from
 * https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8.
 *
 * I edited it to help me read and understand what's happening here, and
 * rewrote certain parts the way I would, partially to see if I properly
 * understood what was being done in each line.
 *
 * @key: string used as the key to generate the hash value
 *
 * Return: the hash value of the given string
 */
unsigned long int hash_djb2(const unsigned char *key)
{
	unsigned long int hashValue; /* hash number to generate */
	const unsigned char *c; /* current char of string */

	/* init hash value to something. IDK why it's this number. */
	hashValue = 5381;

	/* generates the hash value based on each character in the string */
	for (c = key; *c != '\0'; c++)
		hashValue = (hashValue << 5) + hashValue + *c; /* hashValue * 33 + *c */

	return (hashValue);
}
