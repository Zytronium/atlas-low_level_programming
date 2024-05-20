#include "main.h"

/**
 * print_alphabet_x10 - entry point I think
 * Description: prints the alphabet in lowercase followed by a new line, 10
 * times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 1;

	while (i<=10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
