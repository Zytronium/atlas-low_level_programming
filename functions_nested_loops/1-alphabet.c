#include "main.h"

/**
 * print_alphabet - entry point I think
 * Description: prints the alphabet, in lowercase, followed by a new line.
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
