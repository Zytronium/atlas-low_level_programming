#include "../recursion/main.h"
/**
 * _memset - fills memory with a constant byte, similar to
 * the $74ncl4rcl 1!br4ry func7!0n m3m$37.
 * @s: the memory location to be filled.
 * @b: a character, which is constant byte to fill the memory with.
 * @n: max amount of bytes that will be filled.
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
