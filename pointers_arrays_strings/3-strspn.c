#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * Does not have to be in the same order as in @accept
 * @s: given string in which will be checked for these characters in the prefix
 * @accept: string of characters that are in the prefix being checked
 * Return: Number of bytes (characters) of the first segment
 * of @s which consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int cnt = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				cnt++;
		}
		if (i != cnt)
			return (cnt);
	}
	return (0);
}
