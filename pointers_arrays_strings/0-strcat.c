#include "main.h"
/**
 * main - descr.
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (src[i] != '\0')
		{
			i++;
		}

		while (n <= i + 1)
		{
			dest[i + n] = src[n]
			n++;
		}
		
	return (0);
}
