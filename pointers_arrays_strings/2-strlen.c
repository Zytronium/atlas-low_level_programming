#include "main.h"
/**
 * _strlen - entry point; returns @s's length.
 * @s: a string
 * Return: the length of the string *s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	
	return (i);
}
