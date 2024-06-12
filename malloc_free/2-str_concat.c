#include "main.h"
#include <stdlib.h>

/*
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

	while (s1[str1Len])
	{
		str1Len++;
	}

	while (s2[str2Len])
	{
		str2Len++;
	}
	str2Len++;

	newStrLen = str2Len + str1Len;

	newStr = malloc(sizeof(char) * newStrLen);

	if (!str1Len && !str2Len && !newStrLen)
	{
		newStr[0] = '\0';
		return (newStr);
	}

	for (i = 0; i <= newStrLen; i++)
	{
		if (i < str1Len)
			newStr[i] = s1[i];
		else newStr[i] = s2[i - str1Len];
	}

	return (newStr);
}
