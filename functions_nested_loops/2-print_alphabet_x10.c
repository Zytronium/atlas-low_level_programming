#include "main.h"

/**
 * print_alphabet - entry point I think
 * Description: prints the alphabet, in lowercase, followed by a new line.
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;

	i = 1;

	while (i<=10)
	{
		print_alphabet();
		i++;
	}
}
