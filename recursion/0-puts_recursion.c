#include "main.h"
/**
 * _puts_recursion - uhh, I admit that I\n
 * never read what to do... yet. I am just\n
 * gonna go ahead and push this though, so I can\n
 * give a log of some small additions I made so\n
 * you can can see my thought process and stuff\n
 * up on GitHub. Now, read the 1st word of every line.\n
 * Update: I read what to do and it's just printing a string, followed by
 * a new line, using recursion.\n
 * \n
 * I just couldn't delete my masterpiece above.
 *
 * @s: string to print.\n
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		char *ptr = s;

		ptr++;
		_putchar(*s);
		_puts_recursion(ptr);
	}
	else
		_putchar('\n');
}
