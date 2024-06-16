#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings, adding up to @n characters of @s2
 *
 * @s1: string to add s2 to
 * @s2: string to be added to s1
 * @n: character limit for s2
 *
 * Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;
	int str1len = 0, str2len = 0, i, j;

	if (s1 != NULL)
	{
		while (s1[str1len])
			str1len++;
	}

	if (s2 != NULL)
	{
		while (s2[str2len] && (unsigned int) str2len < n)
			str2len++;
	}

	newStr = malloc(str1len + str2len + 1);
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < str1len && str1len > 0; i++)
		newStr[i] = s1[i];

	for (j = 0; j < str2len && str2len > 0; j++)
		newStr[j + str1len] = s2[j];
	newStr[j + str1len] = '\0';

	return (newStr);
}
