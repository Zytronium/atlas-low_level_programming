#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to search
 * @accept: characters to search for
 * Return: pointer to first byte (character) from @s that is
 * a character listed in @accept
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*a == *s)
				return (s);
			a++;
		}
		s++;
	}
	return (0);
}
