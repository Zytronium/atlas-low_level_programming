#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a copy of a string.
 *
 * @str: string to copy
 *
 * Return: NULL if failed, else pointer to first character in a copied string
 */
char *_strdup(char *str)
{
	char *newStr;
	int strLen = 0;
	int i;

	while (str[strLen])
		strLen++

	newStr = malloc(sizeof(char) * strLen);

	if (!newStr)
		return (NULL);

	for (i = 0; i <= strLen; i++)
	{
		newStr[i] = str[i];
	}

	return (newSt);
}
