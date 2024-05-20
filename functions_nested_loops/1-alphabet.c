#include "main.h"

/**
 * main - entry point
 * Description: prints the alphabet, in lowercase, followed by a new line.
 * Return: 0
 */

print_alphabet =
{
	char c;

	c = 'a';

	while(c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
