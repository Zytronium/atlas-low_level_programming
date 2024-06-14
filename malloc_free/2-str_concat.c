#include <stdlib.h>
#include "main.h"

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
	char *newStr, *str1, *str2;
	int str1Len = 0, str2Len = 0, newStrLen, i;

	if (s1 == NULL)
	{
		str1 = malloc(sizeof(char));
		str1[0] = '\0';
	}
	else
	{
		while (s1[str1Len])
		{
			str1Len++;
		}
		str1 = malloc(sizeof(char) * str1Len);
		str1Len--;
		for (i = 0; s1[i]; i++)
		{
			str1[i] = s1[i];
		}
	}
	if (s2 == NULL)
	{
		str2 = malloc(sizeof(char));
		str2[0] = '\0';
	}
	else
	{
		while (s2[str2Len]) {
			{
				str2Len++;
			}
			str2 = malloc(sizeof(char) * str2Len);
			for (i = 0; s2[i]; i++) {
				str2[i] = s2[i];
			}
		}
	}

	newStrLen = str2Len + str1Len;

	newStr = malloc(sizeof(char) * newStrLen);

	for (i = 0; i <= newStrLen; i++)
	{
		if (i <= str1Len && str1Len > 0)
			newStr[i] = str1[i];
		else
			if (str2Len > 0)
		{
			if (str1Len == 0)
				newStr[i] = str2[i - str1Len];
			else
				newStr[i] = str2[i - str1Len - 1];
		}
			else
				newStr[i] = '\0';
	}

	if (s1 != NULL && str1 != s1)
		free(str1);
	if (s2 != NULL && str2 != s2)
		free(str2);

	return (newStr);
}
