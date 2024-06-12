#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of the string, not including null terminator
 * @c: character to set string to
 * Return: NULL if size is 0 or if it fails, else, a pointer to the new array.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size <= 0)
		return (0);

	str = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		str[i] = c;
	str[size] = '\0';

	return (str);
}
