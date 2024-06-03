#include "main.h"
/**
 * _strstr - locates a substring within a given string.
 * @haystack: string to search for @needle in
 * @needle: substring to be located
 * Return: pointer to first matching substring @needle within @haystack,
 * or NULL (0) if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (needle[i])
	{
		i++;
	}

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n == *h)
		{
			n++;
			h++;
			if (!*n)
				return (haystack);
		}
		haystack++;
	}
	return (haystack);
}