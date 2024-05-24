#include "main.h"
/**
 * print_rev - dprints a string/text in reverse, followed by a new line, to stdout.
 * @s: text to be printed in reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(i);
	}
	_putchar('\n');
}
