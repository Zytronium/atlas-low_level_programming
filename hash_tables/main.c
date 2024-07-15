#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - checks the code
 *
 * Return: EXIT_SUCCESS (0)
 */
int main(void)
{
	char *s;

	s = "cisfun";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "Don't forget to tweet today";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "98";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	return (EXIT_SUCCESS);
}