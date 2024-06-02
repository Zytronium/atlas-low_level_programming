#include "main.h"
/**
 * _strcmp - compares 2 strings and returns the difference
 * @s1: string one
 * @s2: string two
 *
 * Return: difference in the values of the 2 strings - <0, 0, or >0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] - s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
