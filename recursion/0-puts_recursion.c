#include "main.h"
/**
 * _puts_recursion - uhh, I admit that I
 * never read what to do... yet. I am just
 * gonna go ahead and push this though, so I can
 * give a log of some small additions I made so
 * you can can see my thought process and stuff
 * up on GitHub. Now, read the 1st word of every line.
 * Update: I read what to do and it's just printing a string using recursion.
 * I just couldn't delete my masterpiece above.
 *
 * @s: string to print.
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (!*s)
		return;
	char *ptr = s;
	int i = ptr++;

	_putchar(*s);
	_puts_recursion(ptr);
}
