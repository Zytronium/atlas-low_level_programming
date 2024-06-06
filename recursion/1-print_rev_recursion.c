#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse using recursion. Does
 * not print a new line at the end, so if I have to add it later like last
 * time, we're living in the matrix, because it currently does not say to.
 *
 * @s: Given string to print
 *
 * Return: nothing. Nothing is real. We are living in a simulation.
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		char *ptr = s;

		_print_rev_recursion(++ptr);
		_putchar(*s);
	}
}
