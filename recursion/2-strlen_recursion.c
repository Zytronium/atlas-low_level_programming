#include "main.h"
/**
 * _strlen_recursion - gets the a string's length using recursion.
 * Does not print anything.
 *
 * @s: provided string to measure length of.
 * Return: @s's string length
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		char *ptr = s;

		return (_strlen_recursion(++ptr) + 1);
	}
	return (0);
}
