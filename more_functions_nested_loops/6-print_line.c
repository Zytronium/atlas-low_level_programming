#include "main.h"
/**
 * print_line - prints a linethat is @n characters long, and a new line.
 * @n: number of underscores that are printed in order to draw the line.
 *
 * Return: 0
 */
void print_line(int n)
{
	int r = 0;
	while (r < n)
	{
		_putchar('_');
		r++;
	}
	_putchar('\n');
}
