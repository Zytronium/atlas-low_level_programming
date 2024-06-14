#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings and returns the result
 *
 * @s1: string to have another string added to it
 * @s2: string to be added to the other string
 *
 * Return: new string that's equal to s1 plus s2
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	int str1Len = 0, str2Len = 0, newStrLen, i;

	if (s1 != NULL)
	{
		while (s1[str1Len])
		{
			str1Len++;
		}
	}
	else
		s1 = "";
	if (s2 != NULL)
	{
		while (s2[str2Len])
		{
			str2Len++;
		}
	}
	else
		s2 = "";

	newStrLen = str1Len + str2Len;

	newStr = malloc(sizeof(char) * newStrLen + 1);
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i <= newStrLen + 1; i++)
	{
		if (i < str1Len && str1Len > 0)
			newStr[i] = s1[i];
		else
			if (i >= str1Len)
			{
				newStr[i] = s2[i - str1Len];
			}
		else
			newStr[i] = '\0';
	}

	return (newStr);
}
