#include "main.h"
/**
 * _strchr - searches a string @s to locate a character @c.
 * @s: string to search for @c in
 * @c: character to be located
 * Return: pointer to the first occurrence of the character @c in the string @s
 * or NULL (0) if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return &s[i];
		}
	}

	return (NULL);
}
