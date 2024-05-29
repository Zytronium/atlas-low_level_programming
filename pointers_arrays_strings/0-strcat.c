#include "main.h"
/**
 * _strcat - adds src to dest
 * @dest: string that is getting @src added to it
 * @src: string that is added to @dest
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (n <= i + 1)
	{
		dest[i + n] = src[n];
		n++;
	}

	return (dest);
}
