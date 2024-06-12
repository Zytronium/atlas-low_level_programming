#include "main.h"
#include <stdlib.h>

/**
 * _strdup - descr.
 *
 * @str:
 *
 * Return: 0
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
