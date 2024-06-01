#include "main.h"
/**
 * leet - turns the letrs a e o t and l into 4 3 0 7 and 1, respectively.
 * Not case sensitive.
 * I'm really proud of this script.
 * @s: string to be modified to leet format
 * Return: s converted to leet
 */
char *leet(char *s)
{
	int i, j;
	char letrs[10] = "aeotl";
	char numbs[10] = "43071";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; letrs[j]; j++)
			if (s[i] == letrs[j] || s[i] == letrs[j] - 32)
				s[i] = numbs[j];
	}
	return (s);
}
