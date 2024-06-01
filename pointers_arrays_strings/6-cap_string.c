#include "main.h"
/**
 * cap_string - capitalizes the first letter of all words.
 * @s: string provided
 * Return: @s but with every word's 1st letter capitalized
 */
char *cap_string(char *s)
{
	int cap = 0;
	char separators[13] = " \t\n,;.!?\"({})";
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		if (cap && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		cap = 0;
		for (j = 0; separators[j]; j++)
		{
			if (s[i] == separators[j])
				cap = 1;
		}
	}

	return (s);
}
